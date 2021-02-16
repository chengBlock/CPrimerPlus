// glue.c -- 使用##运算符
#include <stdio.h>

// ## 运算符可用于类函数宏的替换部分
// ## 还可用于对象宏的替换部分
// ## 运算符把两个记号组合成一个记号
#define XNAME(n) x##n
#define PRINT_XN(n) printf("x" #n " = %d\n", x##n);

int main(void)
{
    // 变成int x1 = 14
    int XNAME(1) = 14;
    // 变成int x2 = 20;
    int XNAME(2) = 20;

    int x3 = 30;
    // 变成 printf("x1 = %d\n",x1)
    PRINT_XN(1);
    PRINT_XN(2);
    PRINT_XN(3);

    return 0;
}