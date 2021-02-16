/* platinum.c -- your weight in platium */
#include <stdio.h>

int main(void)
{
    // your weight
    float weight;
    // 相等重量白金的价格
    float value;

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");

    // 取得用户体重
    scanf("%f,%f", &weight,&value);
    printf("%f,%f\n",weight,value);

    value = weight * 1000 * 704.213;

    printf("Your weight is %f.\n", weight);
    printf("Your value in platinum is %f\n", value);

    return 0;
}