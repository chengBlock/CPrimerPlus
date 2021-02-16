/* echo.c -- 重复输入 */
#include <stdio.h>

int main(void)
{
    char ch;
    // getchar()/putchar()每次处理一个字符
    while ((ch = getchar()) != '#')     
    {
        putchar(ch);
    }

    return 0;  
}