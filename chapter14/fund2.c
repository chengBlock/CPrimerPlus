// fund2.c -- 传递指向结构的指针

// 由于函数要处理funds结构，所以必须声明funds结构

// C只支持指针变量做参数，没有引用变量的概念
#include <stdio.h>
#define FUNDLEN 50

struct funds
{
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

// 声明传入结构指针的参数
// 因为参数是指针类型变量，所以实参要为变量的地址
double sum(const struct funds *);

int main(void)
{
    // 初始化结构体变量
    struct funds stan = {
        "Bank of China",
        1234.5,
        "People and Live",
        6789.1};

    printf("%.2f.\n", sum(&stan));
}

// money为传入的指针变量
double sum(const struct funds *money)
{
    return (money->bankfund + money->savefund);
}