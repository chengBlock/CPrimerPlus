/* preproc.c -- 简单的预处理示例 */
#include <stdio.h>

#define TWO 2        // 可以使用注释，预编译时候会翻译为空格
#define OW "Consistency is the last refuge of the unimagina\
tive. - Oscar Wilde" // 预处理开始前，编译器会把多行物理行处理为一行逻辑行
#define FOUR TWO *TWO
#define PX printf("X is %d.\n", x)
#define FMT "X is %d.\n"

int main(void)
{
    int x = TWO;

    // 从宏变成最终替换文本的过程称为“宏展开”
    // 预处理器不做计算，不对表达式求值，他只进行行替换
    // 用宏等价的替换文本进行替换
    PX;
    x = FOUR;
    printf(FMT, x);
    printf("%s\n", OW);
    printf("TWO: OW\n");

    return 0;
}