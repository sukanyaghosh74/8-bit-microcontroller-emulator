#include "emulator.h"
#include "instructions.h"
#include "debug.h"
#include <stdio.h>
#include <string.h>

void initialize_emulator(Emulator *emu) {
    memset(emu->memory, 0, MEMORY_SIZE);
    memset(emu->registers, 0, NUM_REGISTERS);
    emu->pc = 0;
    emu->sp = MEMORY_SIZE - 1; // Stack grows downwards
}

void load_program(Emulator *emu, const unsigned char *program, int size) {
    if (size > MEMORY_SIZE) {
        fprintf(stderr, "Program size exceeds memory capacity!\n");
        return;
    }
    memcpy(emu->memory, program, size);
}

void execute_program(Emulator *emu) {
    while (emu->pc < MEMORY_SIZE) {
        unsigned char opcode = emu->memory[emu->pc];
        execute_instruction(emu, opcode);
    }
}
