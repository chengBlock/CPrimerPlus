// fathm_ft.c -- 2音寻转换成英寸
#include <stdio.h>

int main(void)
{
    int feet, fathom;

    fathom = 2;
    feet = 6 * fathom;

    printf("feet: %d, fathom: %d\n",feet,fathom);
}
