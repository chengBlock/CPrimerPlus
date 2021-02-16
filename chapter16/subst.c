// subst.c -- 在字符串中替换
#include <stdio.h>
// 字符串化，把记号转换为字符串的形参名(我觉得是实参)
// 记得加双引号 " #x "
#define PSQR(x) printf("The square of  " #x "  is %d.\n", ((x) * (x)))

int main(void)
{
    int y = 5;

    // 将宏参直接用实锤字符串形式替换
    PSQR(y);
    PSQR(2 + 4);

    return 0;
}