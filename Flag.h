#ifndef FLAG_H
#define FLAG_H
#include "Instruction.h"
class Flag {
    private:
        Instruction *head;
        int priority;
        bool recurring;
        int groupID;
    public:
        Flag(int p, bool r, int g, Instruction *h);
        Instruction *getHead(){ return head; }
        int getPriority() {return priority; }
        bool getRecur() {return recurring; }
        int getGroupID(){ return groupID; }

};
#endif