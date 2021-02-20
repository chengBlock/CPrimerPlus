// reducto.c -- 把文件压缩成原来的1/3
#include <stdio.h>
// 提供exit()的原型
#include <stdlib.h>
// 提供strcpy()、strcat()的原型
#include <string.h>

#define LEN 40

// argc[]等同于指针
// int main(int argc,char **argv)
int main(int argc, char *argc[])
{
    // 声明两个指向FILE的指针
    FILE *in, *out;
    int ch;
    // 存储输入的文件名
    char name[LEN];
    int count = 0;

    // 检查命令行参数
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
}