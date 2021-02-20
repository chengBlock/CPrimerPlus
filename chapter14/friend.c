// friend.c -- 嵌套结构示例
#include <stdio.h>
#define LEN 20

// 字符串数组
const char *msgs[5] =
    {
        "   Thank you for the wonderful evening, ",
        "You certainly prove that a ",
        "is a special kind of guy. We must get together",
        "over a delicious ",
        " and have a few laughs."};

// 用于嵌套的names结构
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
    // 初始化一个结构变量
    struct guy fellow =
        {
            {"coco", "Hu"},
            "火龙果",
            "小仙女",
            1000000.0};

    printf("Dear %s,\n\n", fellow.handle.first);
    printf("%s%s.\n", msgs[0], fellow.handle.first);
    printf("%s%s\n", msgs[1], fellow.job);
    printf("%s\n", msgs[2]);
    printf("%s%s%s", msgs[3], fellow.favfood, msgs[4]);

    if (fellow.income > 75000.0)
    {
        puts("!!");
    }
    else
    {
        puts(".");
    }
    printf("\n%40s%s\n", " ", "See you soon,");
    printf("%40s%s\n", " ", "clCHENG");

    return 0;
}