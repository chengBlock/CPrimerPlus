// count.c -- 使用标准 I/O
#include <stdio.h>
#include <stdlib.h>     //提供exit()的原型

int main(int argc, char const *argv[])
{
    // 读取文件时，储存每个字符的地方
    int ch;
    // 文件指针
    FILE *fp;
    unsigned long count = 0;
    if (argc != 2)
    {
        printf("Usage: %s filename\n",argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen(argv[1],"r")) == NULL)
    {
        printf("Can't open %s\n",argv[1]);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp) != EOF))
    {
        // 将读入的字符标准输出，等同于putchar
        putc(ch,stdout);
        count++;
    }
    fclose(fp);

    printf("File %s has %lu characters.\n",argv[1],count);
    
    return 0;
}
