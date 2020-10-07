
#ifndef UNIT_H
#define UNIT_H
#include "Definition.h"
class Unit
{
private:

    Status status;
    
public:
    Unit();
    ~Unit();

    void PrintStatus();
};

#endif // #ifndef UNIT_H