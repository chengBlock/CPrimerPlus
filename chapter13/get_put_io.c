// get_put_io.c -- 单字符IO函数
#include <stdio.h>

int main(void)
{
    // 用于获取字符
    int ch;
    // 标准字符IO
    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
    }
    ch = getchar();
    putchar(ch);

    getchar();
    getchar();
    return 0;
}