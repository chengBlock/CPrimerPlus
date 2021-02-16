/* hotel.c -- 酒店管理函数 */
#include <stdio.h>
#include "./hotel.h"

int menu(void)
{
    int code, status;

    printf("%s\n", STARS);
    printf("Enter the number of the desired hotel:\n");
    printf("1) Fairfield Arms       2) Hotel Olympic\n");
    printf("3) Chertworthy Plaza    4) The Stone\n");
    printf("5) quit\n");
    printf("%s\n", STARS);

    while ((status = scanf("%d", &code)) != 1 || (code < 1 || code > 5))
    {
        if (status != 1)
        {
            // 处理非整数输入
            scanf("%*s");
        }
        printf("Enter an integer from 1 to 5, please.\n");
    }
    return code;
}

int getnights(void)
{
    int nights;
    printf("How many nights are needed? ");
    while (scanf("%d", &nights) != 1)
    {
        scanf("%*s"); // 处理非整形输入
        printf("Please enter an integer, such as 2.\n");
    }
    return nights;
}

void showprice(double rate, int nights)
{
    int n;
    double total = 0.0;

    for (n = 0; n < nights; n++)
    {
        total += rate * DISCOUNT;
    }
    printf("The total cost will be $%0.2f.\n", total);
}