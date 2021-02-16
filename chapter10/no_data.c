// no_data.c -- 未初始化数组
#include <stdio.h>

#define SIZE 4

int main(void)
{
    // 变量未初始化，其值默认为0、null
    int n;
    float f;
    char ch;
    printf("%d %f [%c]\n", n, f, ch);

    // 未初始化，其值为当前内存中的现有数据
    int no_data[SIZE];
    int i;

    for ( i = 0; i < SIZE; i++)
    {
        printf("%2d %-ld\n",i,no_data[i]);
    }
    
    return 0;
}