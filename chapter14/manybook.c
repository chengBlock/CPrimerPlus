// manybook.c -- 包含多本书的图书目录
#include <stdio.h>
#include <string.h>

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100 // 书籍的最大数量

char *s_gets(char *st, int n);

struct book
{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    // book 类型结构的数组
    struct book library[MAXBKS];
    int count = 0;
    int index;

    printf("Please enter the book title.\n");
    printf("Press [enter] at the start of a line to stop.\n");

    // '\0'是空字符串，若连续输入两个Enter就是空串
    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
    {
        printf("Now enter the author.\n");
        s_gets(library[count].author, MAXAUTL);
        printf("Now enter the value.\n");
        // count++
        scanf("%f", &library[count++].value);
        // 弥补scanf()函数遇到空格和换行符就结束读取的问题
        // 在输入序列中查找并删除\n
        while (getchar() != '\n')
        {
            // 清理输入行
            continue;
        }
        if (count < MAXBKS)
        {
            printf("Enter the next title.\n");
        }
    }

    if (count > 0)
    {
        printf("Here is the list of your books:\n");
        for (index = 0; index < count; index++)
        {
            printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
        }
    }
    else
    {
        printf("No books? Too bad.\n");
    }

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