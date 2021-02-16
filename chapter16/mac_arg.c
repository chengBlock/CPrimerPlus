// mac_arg.c -- 带参数的宏
#include <stdio.h>

// 加上足够的括号，确保执行结果不因运算顺序出错
// 一般不使用累加运算符做宏参数，因为简单替换并不是传值
#define SQUARE(X) ((X) * (X))
#define PR(X) printf("The result is %d.\n", X)

int main(void)
{
    int x = 5;
    int z;

    printf("X = %d\n", x);
    z = SQUARE(x); // z=25
    printf("Evaluating SQUARE(x): ");
    PR(z);         //25
    z = SQUARE(2); //z=4
    printf("Evaluating SQUARE(2): ");
    PR(z); //4

    printf("Evaluating SQUARE(x + 2): ");
    // 预处理不做运算，只做替换
    // X * X ==> x + 2 * x + 2
    PR(SQUARE(x + 2)); //17

    printf("Evaluating 100/SQUARE(2): ");
    // 100/2*2
    PR(100 / SQUARE(2)); //100

    // 以上两种情况，要使用足够多的圆括号确保运算和结合的正确顺序
    // #define SQUARE(x) ((x)*(x))

    printf("x is %d.\n", x);
    printf("Evaluating SQUARE(++x): ");
    // X * X ==> ++x * ++x
    // 这类运算未规定顺序，6*7，7*6，7*7
    // 执行完后x均累加两次，所以x最早值为7
    PR(SQUARE(++x));
    printf("After incrementing, x is %x.\n", x);

    return 0;
}