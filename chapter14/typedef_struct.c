// typedef_struct.c -- typedef关键字的学习
#include <stdio.h>

#define MAXTITL 41 // 书名最大长度
#define MAXAUTL 31 // 作者名最大长度

// 若两个结构在声明时都没有标记，它们的成员完全相同
// C认为这两个结构的类型相同

// 定义COMPLEX为这个未标记的结构类型的自定义名称
struct complex
{
    float real;
    float imag;
};

struct book
{
    // 成员或字段
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct complex c1 = {1, 2};

    printf("%d %d\n", c1.real, c1.imag);

    struct book b1 = {"Tom", "Bok", 12.1};

    printf("%s,%d\n", b1.title, b1.value);

    return 0;
}