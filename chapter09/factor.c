// factor.c -- 使用循环和递归计算阶乘
#include <stdio.h>

// 13!已超62亿，超过long的范围
long fact(int);
long rfact(int);

int main(void)
{
    int num;

    printf("This program calculates factorials.\n");
    printf("Enter a value in the range 0-12 (q to quit):\n");
    while (scanf("%d", &num) == 1)
    {
        if (num < 0)
        {
            printf("No negative numbers, please.\n");
        }
        else if (num > 12)
        {
            printf("Keep input under 13.\n");
        }
        else
        {
            printf("loop: %d factorial = %ld\n", num, fact(num));
            printf("recursion: %d factorial = %ld\n", num, rfact(num));
        }

        printf("Enter a value in the range 0-12 (q to quit):\n");
    }

    return 0;
}

long fact(int n)
{
    long ans;
    // 用形参当循环变量，可以少定义一个变量，小技巧
    for (ans = 1; n > 1; n--)
    {
        ans *= n;
    }

    return ans;
}

long rfact(int n)
{
    long ans;
    // 阶乘 n! = n * rfact(n - 1)，本身就是递归的最好例子
    if (n > 1)
    {
        ans = n * rfact(n - 1);
    }
    else
    {
        ans = 1;
    }
    return ans;
}