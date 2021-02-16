/* ptr.c -- 间接运算符*、取地址符*/
#include <stdio.h>

int main(void)
{
    int value = 22;
    int val = 22;
    int *ptr = &value;

    int *ptr1, *val1;
    printf("val1 = %p\n", val1);

    printf("*ptr = %d,ptr = %p\n", *ptr, ptr);
    value = 1;
    printf("*ptr = %d,ptr = %p\n", *ptr, ptr);

    ptr = &val;

    printf("*ptr = %d,ptr = %p\n", *ptr, ptr);
}