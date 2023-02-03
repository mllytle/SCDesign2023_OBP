#include "Flag.h"
#include "Instruction.h"
#include <cstdlib>

// Flag Constructor:
Flag::Flag(int p, bool r, int g, Instruction *h = NULL){
    head = h;
    priority = p;
    recurring = r;
    groupID = g;
}

