// book.c -- 一本书的tushumul
#include <stdio.h>
#include <string.h>

#define MAXTITL 41 // 书名最大长度
#define MAXAUTL 31 // 作者名最大长度

char *s_gets(char *st, int n);

// 结构模板：标记是book
struct book
{
    // 成员或字段
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
}; //分号结尾

int main(void)
{
    // 声明结构类型变量
    // struct book 代表book类型的结构变量，一个结构模板
    struct book library;

    printf("输入书名:\n");
    s_gets(library.title, MAXTITL);
    printf("输入作者:\n");
    s_gets(library.author, MAXAUTL);
    printf("输入价格:\n");
    // scanf不能限制输入的字符数，但float类型不需要此限制
    scanf("%f", &library.value);
    printf("Book:\n");
    printf("Title:%s\nAuthor:%s\nValue:%.2f\n", library.title, library.author, library.value);

    // 结构变量初始化
    struct book bill =
        {
            "西游记",
            "Tom",
            12.2};
    printf("%f\n", bill.value);
    return 0;
}

// 去掉fgets()存储在字符串中换行符
char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;

    // 通过n限制输入的变量长度
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        // 查找换行符 -- strchr()
        find = strchr(st, '\n');
        // 地址不为null
        if (find)
        {
            // 在返回的地址处放置一个空字符
            *find = '\0';
        }
        else
        {
            while (getchar() != '\n')
            {
                // 处理输入行中剩余的字符
                continue;
            }
        }
    }

    return ret_val;
}