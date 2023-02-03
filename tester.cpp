
#include "Instruction.h"
#include "Flag.h"
#include <iostream>

int main(){
    Flag f = Flag(1, false, 1);
    Instruction ii = Instruction(1,f);
    bool x = ii.getStatus();
    std::cout<<x<<'n';


}