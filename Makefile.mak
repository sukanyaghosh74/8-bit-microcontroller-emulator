CC = gcc
CFLAGS = -Wall -g

all: emulator

emulator: main.c emulator.c instructions.c debug.c
    $(CC) $(CFLAGS) -o emulator main.c emulator.c instructions.c debug.c

clean:
    rm -f emulator
