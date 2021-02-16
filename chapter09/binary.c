// binary.c -- 以二进制形式打印整数
#include <stdio.h>
void to_binary(unsigned long n);
/**
 *  scanf函数返回值：
 *  1)  正整数，表示正确输入参数的个数
 *  2)  0，表示用户输入不匹配，无法正确输入任何值
 *  3)  EOF，stdio.h里面定义的常量(通常为-1)，表示输入流已经结束
 *  printf函数返回值：
 *    输出的字符数
 * EOF：
 *  1.Windows下，用户按下“CTRL+Z”(会看到一个^Z字符)，再按下回车(可能会重复2次)
 *  2.Linux/Unix下，使用“CTRL+D”表示输入结束
 * **/

int main(void)
{
    unsigned long number;
    printf("Enter an integer (q to quit):\n");
    while (scanf("%lu", &number) == 1)
    {
        printf("Binary equivalent: ");
        to_binary(number);
        putchar('\n');
        printf("Enter an integer (q to quit):\n");
    }
    printf("Done.\n");
    return 0;
}

void to_binary(unsigned long n)
{
    int r;

    r = n % 2;

    if (n >= 2)
    {
        to_binary(n / 2);
    }

    putchar(r == 0 ? '0' : '1');
}