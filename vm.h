#ifndef VM_H
#define VM_H

#include <cstdint>

extern uint8_t registers[8];
extern uint8_t memory[256];

void MOV_reg(int addr, uint8_t value);
void MOV_imm(uint8_t addr1, uint8_t addr2);
void LOAD(uint8_t addr, uint8_t ram_addr);
void STORE(uint8_t ram_addr, uint8_t addr);

#endif