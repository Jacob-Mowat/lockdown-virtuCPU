//
// Created by Jacob on 07/04/2020.
//

#ifndef VIRTUCPU_MEMORY_H
#define VIRTUCPU_MEMORY_H

namespace VIRTU_CPU {
    class Memory {
    public:
        const unsigned char c_maxAddr;

        Memory();
        ~Memory();

        void clear();

        const unsigned char& read(const unsigned char& p_addr);
        void write(const unsigned char& p_addr, const unsigned char& p_val);
    private:
        unsigned char* m_memSpc;
    };
}

#endif //VIRTUCPU_MEMORY_H
