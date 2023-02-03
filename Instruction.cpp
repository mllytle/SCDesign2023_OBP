// beep boop some instructions no basal - add flag import once created
#include "Instruction.h"
#include "Flag.h"

// Instrucion Constructor
Instruction::Instruction(int t, Flag f){
    target = t;
    flaglist = f;
}
void Instruction::setStats(bool b){
    status = b;
}


