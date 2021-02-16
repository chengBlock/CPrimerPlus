// day_mon1.c -- 打印每个月的天数
#include <stdio.h>
#define MONTHS 12

int main(void)
{
    // 指定数组大小必须使用常量
    // const限制的变量在C语言中不能用于指定数组大小
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;

    for (index = 0; index < MONTHS; index++)
    {
        // %2d,右对齐，%-2d左对齐
        printf("Month %-2d has %2d days.\n", index + 1, days[index]);
    }
    return 0;
}