#include "Vcpu_ram_uart_sim.h"
#include "Vcpu_ram_uart_sim__Dpi.h"
#include "Vcpu_ram_uart_sim__Syms.h"
#include "Vcpu_ram_uart_sim_tb_m68k_ram_uart.h"
#include "verilated.h"

vluint64_t main_time = 0; // Current simulation time
// This is a 64-bit integer to reduce wrap over issues and
// allow modulus.  You can also use a double, if you wish.

double sc_time_stamp()
{                     // Called by $time in Verilog
    return main_time; // converts to double, to match
                      // what SystemC does
}

int main(int argc, char **argv, char **env)
{
    int i = 0;
    Verilated::commandArgs(argc, argv);
    Vcpu_ram_uart_sim *top = new Vcpu_ram_uart_sim;

    top->tb_m68k_ram_uart->rst_n = 0;


    while (!Verilated::gotFinish())
    {
        if (main_time > 2000)
        {
            top->tb_m68k_ram_uart->rst_n = 1;
            break;
        }
        if ((main_time % 10) == 1)
        {
            top->tb_m68k_ram_uart->clk = 1;
        }
        if ((main_time % 10) == 6)
        {
            top->tb_m68k_ram_uart->clk = 0;
        }

        top->eval();
        main_time++;
    }
    unsigned int **m = (unsigned int **)top->tb_m68k_ram_uart->ao68000_m->memory_registers_m->micro_rom_inst->mem;
/*     printf( "bla %p", m);
    for(i=0; i<512; ++i) {
        printf( "0x%08x%08x%08x", m[i][0], m[i][1], m[i][2]);
    } */
    printf("RUNNING");
    VL_PRINTF("BLABLA");
    while (!Verilated::gotFinish())
    {
        if (main_time > 100)
        {
            top->tb_m68k_ram_uart->rst_n = 1;
        }
        if ((main_time % 10) == 1)
        {
            top->tb_m68k_ram_uart->clk = 1;
        }
        if ((main_time % 10) == 6)
        {
            top->tb_m68k_ram_uart->clk = 0;
        }

        top->eval();
        main_time++;
    }
    delete top;
    exit(0);
}