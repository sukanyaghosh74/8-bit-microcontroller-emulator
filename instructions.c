#include "instructions.h"
#include <stdio.h>

void execute_instruction(Emulator *emu, unsigned char opcode) {
    switch (opcode) {
        case 0x01: // Example: MOV R1, R2
            emu->registers[1] = emu->registers[2];
            emu->pc++;
            break;

        case 0x02: // Example: ADD R1, R2
            emu->registers[1] += emu->registers[2];
            emu->pc++;
            break;

        case 0x03: // Example: JMP addr
            emu->pc = emu->memory[emu->pc + 1];
            break;

        default:
            printf("Unknown opcode: 0x%02X\n", opcode);
            emu->pc++;
            break;
    }
}
