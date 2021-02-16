/* lethead1.c */
#include <stdio.h>

#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

// 函数原型(function prototype)：告诉编译器函数的类型
// 函数调用(function call)：执行函数
// 函数定义(function definition)：明确地指定了函数要做什么

// 函数声明（函数原型）
// ANSI C风格（void）
// void starbar(void);

int main(void)
{
    // 也可以放到main()内部
    void starbar(void);
    starbar();
    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);
    printf("%s\n", PLACE);
    starbar();

    return 0;
}

// 函数定义
void starbar(void)
{
    int count;
    for (count = 1; count <= WIDTH; count++)
    {
        putchar('*');
    }

    putchar('\n');
}