//
// Created by Jacob on 07/04/2020.
//

#include "Memory.h"

VIRTU_CPU::Memory::Memory() {
    this->c_maxAddr = 255;
    this->m_memSpc = new unsigned char[this->c_maxAddr];

    // call the clear
    clear();
}

VIRTU_CPU::Memory::~Memory() {
    // if data exists, delete data and set m_memSpc to point to nullptr
    if (m_memSpc != nullptr) {
        delete[] this->m_memSpc;
        this->m_memSpc = nullptr;
    }
}

void VIRTU_CPU::Memory::clear() {

}

const unsigned char& VIRTU_CPU::Memory::read(const unsigned char& p_addr) {
    return this->m_memSpc[p_addr];
}

void VIRTU_CPU::Memory::write(const unsigned char& p_addr, const unsigned char& p_val) {
    this->m_memSpc[p_addr] = p_val;
}