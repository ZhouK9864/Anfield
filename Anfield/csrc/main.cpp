#include <VBalotelli.h>
#include <verilated.h>
#include <fstream>
#include "verilated_vcd_c.h"
#include "stdio.h"
#include "VBalotelli__Dpi.h"
#include "svdpi.h"
#include "nvboard.h"
#include "stdlib.h"
#include "verilated_dpi.h"
#define N 100000000
#define BITMASK(bits) ((1ull << (bits)) - 1)
#define BITS(x, hi, lo) (((x) >> (lo)) & BITMASK((hi) - (lo) + 1)) // similar to x[hi:lo] in verilog

VBalotelli *top;
VerilatedVcdC *tfp;
int EbreakFlag;
long long InstList[N];
void nvboard_bind_all_pins(VBalotelli *top);
void SystemBreak(int Ebreak);
void SystemBreak(int Ebreak) {
	if(Ebreak == 1) EbreakFlag = 1;
	else EbreakFlag = 0;
}

uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

// 一个输出RTL中通用寄存器的值的示例
void dump_gpr() {
  int i;
  for (i = 0; i < 32; i++) {
    printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
  }
}

uint64_t *reg_gpr = NULL;
extern "C" void get_when_commit(const svOpenArrayHandle r) {
  reg_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

// 一个输出RTL中通用寄存器的值的示例
void get_commit(FILE *fpWrite) {
  int i;
  //for (i = 0; i < 3; i++) {
    //printf("reg[%d] = 0x%lx\n", i, reg_gpr[i]); 
  //}
  if(reg_gpr[2] == 1) {
    printf("trace success!\n");
    fprintf(fpWrite,"%lx\n", reg_gpr[0]);  
    //fprintf(AddrWrite,"%lx\n", reg_gpr[1]); 
  }
}

static void single_cycle() {
	top->Clk = 0; top->eval();
	top->Clk = 1; top->eval();
}

static void reset(int n) {
	top->Rst = 0;
	while (n --> 0) {single_cycle();}
	top->Rst = 1;
}

static void mem_open() {
	FILE *fp;
	if((fp = fopen("./code.mem", "r")) != NULL) {
	  printf("程序指令读取开始。。。\n");
	  for(int i = 0; i < N; i++) {
	   if(fscanf(fp, "%llx", &InstList[i]));
	  }
	  fclose(fp);
	  printf("程序指令读取结束。。。\n");
	}
}

static long int pmem_read(long int PcOut) {
	//printf("Inst Addr is : %lx", PcOut);
	int InstAddr = (PcOut - 0x80000000) / 4;
	//printf("inst addr is : %d", InstAddr);
	return InstList[InstAddr];
}

static long int pmem_load(long int Raddr, FILE *AddrWrite) {
	if(Raddr - 0x80000000 < 0) {
	  return 0;
	} else {
	  int InstAddr = (Raddr - 0x80000000) / 4;
	  printf("inst addr is : %d\n", InstAddr);
	  printf("load data is : %lx\n", InstList[InstAddr]);
	  fprintf(AddrWrite,"type : r; addr : %lx; data : %lx\n", Raddr, InstList[InstAddr]); 
	  return InstList[InstAddr];
	}
}

static void pmem_store(long long Waddr, long int Wdata, int Wmask, FILE *AddrWrite) {
	if(Waddr - 0x80000000 > 0) {
	  printf("Waddr is : %llx\t\t", Waddr);
	  printf("Wmask is : %d\n", Wmask);
	  switch (Wmask){
	    case 8: InstList[(Waddr - 0x80000000) / 4] = Wdata; printf("xxxxxxxxxx is :%lx\n", Wdata); fprintf(AddrWrite,"type : w; addr : %lx; data : %lx\n", Waddr, Wdata); break;
	    case 4: InstList[(Waddr - 0x80000000) / 4] = (InstList[(Waddr - 0x80000000) / 4] & ~0xFFFF) | BITS(Wdata, 31, 0); printf("xxxxxxxxx is :%lx\n", Wdata);fprintf(AddrWrite,"type : w; addr : %lx; data : %lx\n", Waddr, Wdata); break;
	    case 2: InstList[(Waddr - 0x80000000) / 4] = (InstList[(Waddr - 0x80000000) / 4] & ~0xFFFFFF) | BITS(Wdata, 15, 0); printf("xxxxxxxxx is :%lx\n", Wdata);fprintf(AddrWrite,"type : w; addr : %lx; data : %lx\n", Waddr, Wdata); break;
	    case 0: InstList[(Waddr - 0x80000000) / 4] = (InstList[(Waddr - 0x80000000) / 4] & ~0xFFFFFFF) | BITS(Wdata, 7, 0); printf("xxxxxxxxx is :%lx\n", Wdata);fprintf(AddrWrite,"type : w; addr : %lx; data : %lx\n", Waddr, Wdata); break;
	  }
	}
}

vluint64_t main_time = 0;

int main( int argc, char **argv ){
	int i = 200;
	Verilated::commandArgs(argc, argv);
	Verilated::traceEverOn(true);
	tfp = new VerilatedVcdC;
	top = new VBalotelli;
	nvboard_bind_all_pins(top);
	nvboard_init();
	top->trace(tfp, 99);
	tfp->open("Vtest.vcd");
	mem_open();
	FILE *fpWrite = fopen("./difftest/RegCommitData_Rtrace.txt","w"); 
	FILE *AddrWrite = fopen("./difftest/RegCommitAddr_Rtrace.txt","w"); 
	svLogicVecVal *GetData = NULL;
	svLogicVecVal *GetAddr = NULL;
	svLogic *EN = NULL;
	while(!Verilated::gotFinish() && !EbreakFlag){
	       	single_cycle();
		nvboard_update();
		if(i > 190) { top->Rst = 0; }
	        else { top->Rst = 1; }
		top->InstIn = pmem_read(top->PcOut);
		//printf("RaddrOut is : %lx\n", top->RaddrOut);
		top->MemDataIn = pmem_load(top->RaddrOut, AddrWrite);
		printf("Load Addr is : %lx\n", top->RaddrOut);
		printf("Load data is : %lx\n", top->MemDataIn);
		printf("Store is : %lx\n", top->WaddrOut);
		pmem_store(top->WaddrOut, top->MemDataOut, top->Wmask, AddrWrite);	
		//dump_gpr();
		get_commit(fpWrite);
		top->eval();
		tfp->dump(main_time);
		main_time++;
		i --;
	}
	fclose(fpWrite); 
nvboard_quit();
tfp->close();
delete top;
delete tfp;
exit(0);
return 0;
}

