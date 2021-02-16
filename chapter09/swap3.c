/* swap3.c -- 使用指针解决交换函数的问题 */
#include <stdio.h>

// C没有引用变量
// 传指针类型的参数过来，直接修改对应内存变量
void interchange(int *, int *);

int main(void)
{
    int x = 5, y = 10;
    printf("Originally x = %d and y = %d.\n", x, y);
    // 因为函数原型参数为指针类型，所有要传入变量地址
    interchange(&x, &y);
    printf("Originally x = %d and y = %d.\n", x, y);
}

void interchange(int *u, int *v)
{
    int temp;
    // 间接运算符赋值等同于直接修改对应内存的值
    temp = *u; // temp获取u所指向对象的值
    *u = *v;
    *v = temp;
}