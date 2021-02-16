// variadic.c -- 变参宏
#include <stdio.h>
// 引用数学库时，要在编译后加上 "-lm"
#include <math.h>

// 变参宏，通过将参数列表中最后的参数写成"..."实现此功能
// 预定义宏__VA_ARGS__可用在替换部分，表明省略号代表什么
// 省略号只能代替最后的宏参数
#define PR(X, ...) printf("Message " #X ": " __VA_ARGS__)

int main(void)
{
    double x = 48;
    double y;

    y = sqrt(x);

    PR(1, "x = %g\n", x);
    PR(2, "x = %.2f, y = %.4f\n", x, y);

    printf("A""B");

    return 0;
}