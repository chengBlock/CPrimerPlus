// book1.c -- 学习结构变量指针的学习
#include <stdio.h>

int main(void)
{
    int a, *aptr;
    a = 1;
    *aptr = 2;
    printf("a=%d,*aptr=%d\n", a, *aptr);
    printf("aptr = %p\n", aptr);
    *aptr = a;
    printf("aptr = %p\n", aptr);
    printf("%d\n", *aptr);
    printf("%lu\n", a);
    // aptr = &a;
    // printf("aptr = %p\n", aptr);
    // printf("*aptr=%d\n", *aptr);
    // printf("Address of a=%p\nAddress of aptr=%p\n", &a, aptr);

    return 0;
}