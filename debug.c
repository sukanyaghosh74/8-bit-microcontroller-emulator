#include "debug.h"
#include <stdio.h>

void print_memory(Emulator *emu) {
    printf("Memory dump:\n");
    for (int i = 0; i < MEMORY_SIZE; i++) {
        printf("%02X ", emu->memory[i]);
        if ((i + 1) % 16 == 0) printf("\n");
    }
}

void print_registers(Emulator *emu) {
    printf("Register dump:\n");
    for (int i = 0; i < NUM_REGISTERS; i++) {
        printf("R%d: %02X\n", i, emu->registers[i]);
    }
    printf("PC: %02X\n", emu->pc);
    printf("SP: %02X\n", emu->sp);
}
