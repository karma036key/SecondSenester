#include <stdlib.h>
#include <stdio.h>

class Fighter
{
public:
    int m_hp ;
    int m_str;
    int m_mag;
    int m_tec;
    int m_spd;
    int m_def;
    int m_luc;
    int m_mde;

public:     
    Fighter();
    ~Fighter();
};

int main()
{
    Fighter fighter;

    printf(" m_hp  = %d\n", fighter.m_hp);
    printf(" m_str = %d\n", fighter.m_hp);
    printf(" m_mag = %d\n", fighter.m_hp);
    printf(" m_tec = %d\n", fighter.m_hp);
    printf(" m_spd = %d\n", fighter.m_hp);
    printf(" m_def = %d\n", fighter.m_hp);
    printf(" m_luc = %d\n", fighter.m_hp);
    printf(" m_mde = %d\n", fighter.m_hp);

    system("pause");
    return 0;
}

 Fighter::Fighter()
{
     m_hp  = 0;
     m_str = 0;
     m_mag = 0;
     m_tec = 0;
     m_spd = 0;
     m_def = 0;
     m_luc = 0;
     m_mde = 0;
}

 Fighter::~Fighter()
{
}


