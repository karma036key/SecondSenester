#include "Unit.h"
#include "Common.h"
#include "Definition.h"

Unit::Unit()
{
 
    status._hp = 0;
    status._str = 0;
    status._mag = 0;
    status._tec = 0;
    status._spd = 0;
    status._def = 0;
    status._luc = 0;
    status._mde = 0;
}

Unit::~Unit()
{

}

void Unit::PrintStatus()
{
    printf("|============|\n");
    printf("|ID： 　　　 |\n");
    printf("|============|\n");
    printf("| _hp  = %03d|\n", status. _hp);
    printf("| _str = %03d|\n", status._str);
    printf("| _mag = %03d|\n", status._mag);
    printf("| _tec = %03d|\n", status._tec);
    printf("| _spd = %03d|\n", status._spd);
    printf("| _def = %03d|\n", status._def);
    printf("| _luc = %03d|\n", status._luc);
    printf("| _mde = %03d|\n", status._mde);
    printf("|============|\n");
}