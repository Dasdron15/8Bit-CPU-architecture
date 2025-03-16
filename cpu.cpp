#include <cstdint>
#include <iostream>
#include "vm.h"

using namespace std;

uint8_t registers[8] = {0};
uint8_t memory[256] = {0};

void MOV_reg(int addr, uint8_t value) {
    registers[addr] = value;
}

void MOV_imm(uint8_t addr1, uint8_t addr2) {
    registers[addr1] = registers[addr2];
}

void LOAD(uint8_t addr, uint8_t ram_addr) {
    registers[addr] = memory[ram_addr];
}

void STORE(uint8_t ram_addr, uint8_t addr) {
    memory[ram_addr] = registers[addr];
}

void ADD(uint8_t addr1, uint8_t addr2) {
    registers[addr1] += registers[addr2];
}

void SUB(uint8_t addr1, uint8_t addr2) {
    registers[addr1] -= registers[addr2];
}

void INC(uint8_t addr) {
    registers[addr]++;
}

void DEC(uint8_t addr) {
    registers[addr]--;
}
