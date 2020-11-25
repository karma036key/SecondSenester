
#include <iostream>
#include "Employee.h"

int main()
{
    Employee satou(Employee::POST::STAFF);
    Employee deguchi(Employee::POST::PRESIDENT);

    satou.ShowPost();
    deguchi.ShowPost();

    if (deguchi > satou)
    {
        printf("deguchiさん の方が偉い\n");
    }
    else
    {
        printf("satouさん の方が偉い\n");
    }

    return 0;
}

