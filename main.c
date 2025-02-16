#include "emulator.h"
#include "debug.h"
#include <stdio.h>

int main() {
    Emulator emu;
    initialize_emulator(&emu);

    unsigned char program[] = {0x01, 0x02, 0x03, 0x00}; // Example program
    load_program(&emu, program, sizeof(program));

    while (emu.pc < sizeof(program)) {
        print_registers(&emu);
        execute_program(&emu);
    }

    print_memory(&emu);
    return 0;
}
