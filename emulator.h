#ifndef EMULATOR_H
#define EMULATOR_H

#define MEMORY_SIZE 256
#define NUM_REGISTERS 8

typedef struct {
    unsigned char memory[MEMORY_SIZE];
    unsigned char registers[NUM_REGISTERS];
    unsigned char pc; // Program Counter
    unsigned char sp; // Stack Pointer
} Emulator;

// Function declarations
void initialize_emulator(Emulator *emu);
void load_program(Emulator *emu, const unsigned char *program, int size);
void execute_program(Emulator *emu);

#endif
