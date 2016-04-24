//此程序实现符号函数

#include <stdio.h>

int main(void)
{
    int number, sign;

    printf("Please type in a number: ");
    scanf("%i", &number);

    if ( number < 0)
        sign = -1;
    else if ( number == 0)
        sign = 0;
    else   //此时必然是正数
        sign = 1;

    printf("Sign = %i\n", sign);

    return 0;
}
