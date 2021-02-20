// pointer.c -- 指针练习
#include <stdio.h>

int main(void)
{
    int a = 1;
    // 声明指针变量aptr,并不是说声明整数类型(*aptr)
    // 指针变量aptr并未初始化
    int *aptr;

    aptr = &a;
    printf("a=%d,(*aptr)=%d\n", a, *aptr);
    printf("address a=%p\n", &a);
    printf("pointer is %p\n", aptr);

    return 0;
}