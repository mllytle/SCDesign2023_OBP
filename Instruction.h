#ifndef INSTRUCTION_H
#define INSTRUCTION_H
#include "Flag.h"

class Instruction {
    private:
        int target;
        bool status = false;
        Flag flaglist;
    void setStatus(bool b);
    public:
        Instruction(int t, Flag f);
        Instruction();
        bool getStatus() {return status; }
    
};
#endif
