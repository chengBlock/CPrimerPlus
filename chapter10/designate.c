// designate.c -- C99新特性：指定初始化器(designated initializer)
#include <stdio.h>
#define MONTHS 12

int main(void)
{
    int days[MONTHS] = {[11] = 31,[9] = 30};

    int index;
    for (index = 0; index < MONTHS; index++)
    {
        printf("Month:%2d days:%4d\n", index + 1,days[index]);
    }
    return 0;
}