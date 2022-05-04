#include <VBalotelli.h>
#include <verilated.h>
#include <fstream>
#include "verilated_vcd_c.h"
#include "stdio.h"
#include "nvboard.h"
#include "stdlib.h"
#define N 10000

VBalotelli *top;
VerilatedVcdC *tfp;
uint64_t InstList[N];
void nvboard_bind_all_pins(VBalotelli *top);

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
	  for(int i = 0; i < 5; i++) {
	   printf("取第 %d 条指令\n", i);
	   if(fscanf(fp, "%lx", &InstList[i]));
	  }
	  fclose(fp);
	}
}

static uint64_t pmem_read(uint64_t PcOut) {
	int InstAddr = (PcOut - 2147483648) / 4;
	return InstList[InstAddr];
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
	while(!Verilated::gotFinish() && i > 0){
	       	single_cycle();
		nvboard_update();
		if(i > 190) { top->Rst = 0; }
	        else { top->Rst = 1; }
		top->InstIn = pmem_read(top->PcOut);
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

