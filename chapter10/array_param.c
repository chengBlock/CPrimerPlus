// array_param.c -- 函数头int[] 与int*等价
#include <stdio.h>

int total(int *, int);

int main(void)
{
    int data[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 0};
    printf("%d\n", total(data, 13));
    return 0;
}

int total(int *array, int n)
{
    int total;
    for (total = 0; n > 0; n--)
    {
        total += array[n - 1];
    }
    // 打印结果为8，这是因为array是指针变量
    // 存储了指向array[]的内存地址，占8个字节
    // %zd: 专门打印sizeof函数返回值
    printf("size of array: %zd\n", sizeof(array));
    return total;
}
