/* lethead2.c */
#include <stdio.h>
// 为strlen()提供原型
#include <string.h>

#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

// 第一次使用函数之前必须知道函数的类型
void show_n_char(char ch, int num);

int main(void)
{
    // 用于居中的空格数
    int spaces;

    show_n_char('*', WIDTH);
    putchar('\n');

    spaces = (WIDTH - strlen(NAME)) / 2;
    show_n_char(SPACE, spaces);
    printf("%s\n", NAME);
    show_n_char('*', WIDTH);
    putchar('\n');

    return 0;
}

void show_n_char(char ch, int num)
{
    int count;
    for (count = 0; count < num; count++)
    {
        putchar(ch);
    }
}