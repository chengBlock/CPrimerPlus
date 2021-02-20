// friend1.c -- 使用指向结构的指针

/**
 * @brief 使用指向结构的指针的优点
 * 1.指针更容易操控
 * 2.任意版本的C中，指针均可作为参数传递
 * 3.传递指针往往比传递结构更有效率
 * 4.用于结构中的其它指针类型变量
 * 
 */

#include <stdio.h>
#define LEN 20

struct names
{
    char first[LEN];
    char last[LEN];
};

struct guy
{
    struct names handle;
    char favfood[LEN];
    char job[LEN];
    float income;
};

int main(void)
{
    // 结构类型数组
    struct guy fellow[2] = {
        {{"cl", "CHENG"},
         "猕猴桃",
         "学生",
         54.9},
        {{"coco", "HU"},
         "火龙果",
         "博士",
         88888}};

    /**
     * @brief 访问结构字段：struct guy *him;
     * 1.him->income
     * 2.(*him)->income
     */

    // 定义一个指向结构类型的指针
    struct guy *him;
    printf("address #1: %p #2: %p\n", &fellow[0], &fellow[1]);
    // 告诉编译器指针指向何处
    him = &fellow[0];
    printf("pointer #1: %p #2: %p\n", him, (him + 1));

    printf("him->income is $%0.2f.\n", him->income);
    printf("(*him).income is $%.2f\n", (*him).income);

    // 指向下一个结构，这里就体现出了指针操作的便捷
    him++;
    printf("him->favfood is %s\n", him->favfood);

    return 0;
}