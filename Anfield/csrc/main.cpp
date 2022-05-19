#include <VBalotelli.h>
#include <verilated.h>
#include <fstream>
#include "verilated_vcd_c.h"
#include "stdio.h"
#include "VBalotelli__Dpi.h"
#include "svdpi.h"
#include "nvboard.h"
#include "stdlib.h"
#define N 10000

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
	int InstAddr = (PcOut - 2147483648) / 4;
	return InstList[InstAddr];
}

static long int pmem_load(long int Raddr) {
	if(Raddr - 2147483648 < 0) {
	  return 0;
	} else {
      	  printf("%d\n", Raddr);
	  int InstAddr = (Raddr - 2147483648) / 4;
	  printf("inst addr is : %d\n", InstAddr);
	  return InstList[InstAddr];
	}
}

static void pmem_store(long int Waddr, long int Wdata) {
	if(Waddr - 2147483646 > 0) {
 	  InstList[(Waddr - 2147483646) / 4] = Wdata;
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
	while(!Verilated::gotFinish() && !EbreakFlag){
	       	single_cycle();
		nvboard_update();
		if(i > 190) { top->Rst = 0; }
	        else { top->Rst = 1; }
		top->InstIn = pmem_read(top->PcOut);
		printf("load addr is : %d\n", top->RaddrOut);
		top->MemDataIn = pmem_load(top->RaddrOut);
		pmem_store(top->WaddrOut, top->MemDataOut);	
		top->eval();
		tfp->dump(main_time);
		main_time++;
		i --;
	}
nvboard_quit();
tfp->close();
delete top;
delete tfp;
exit(0);
return 0;
}

