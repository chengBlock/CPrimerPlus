// bounds.c -- 数组下标越界
#include <stdio.h>
#define SIZE 4

int main(void)
{
    int value1 = 44;
    int arr[SIZE];
    int value2 = 88;

    printf("address of value1: %p\n", &value1);
    printf("address of value2: %p\n", &value2);
    // arr数组的地址
    printf("address of arr: %p\n", arr);
    int i;

    printf("value1 = %d, value2 = %d\n", value1, value2);
    // 首尾越界
    for (i = -1; i <= SIZE; i++)
    {
        arr[i] = 2 * i + 1;
    }

    for (i = -1; i < 7; i++)
    {
        printf("%2d %d %p\n", i, arr[i],&arr[i]);
    }

    // 编译器不会检查数组下标是否越界，这样可以保证执行速度
    // C"相信"程序员能够自己解决这个问题
    printf("value1 = %d, value2 = %d\n", value1, value2);
    printf("address of arr[-1]: %p\n", &arr[-1]);
    printf("address of arr[4]: %p\n", &arr[4]);
    printf("address of value1: %p\n", &value1);
    printf("address of value2: %p\n", &value2);
    // arr数组的地址
    printf("address of arr: %p\n", arr);

    return 0;
}