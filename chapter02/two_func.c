// two_func.c -- 一个文件中包含两个函数
#include <stdio.h>

//C90新增函数原型
// 函数声明
void butler(void);

int main(void)
{
    // 函数调用
    butler();
}

// butler函数定义
void butler(void)
{
    printf("I am a butler!\n"); 
}