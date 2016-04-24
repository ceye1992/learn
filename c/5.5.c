//此程序判断一个年份是否是闰年

#include <stdio.h>

int main(void)
{
    int year, rem_4, rem_100, rem_400;

    printf("Enter the year to be text: ");
    scanf("%i", &year);

    rem_4 = year % 4;
    rem_100 = year % 100;
    rem_400 = year % 400;

    if((rem_4 ==0 && rem_100 != 0) || rem_400 == 0)
        printf("\nit's leap year.");
    else
        printf("\nNope, it's not a leap year.");

    return 0;
}
