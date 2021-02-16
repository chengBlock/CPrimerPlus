// day_mon2.c -- 让编译器计算元素个数
#include <stdio.h>

int main(void)
{
    const int data[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 0};

    int size = sizeof(data) / sizeof(data[0]);

    printf("%d %d\n", size,sizeof(int));
    return 0;
}