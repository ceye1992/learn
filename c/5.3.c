//此程序判断一个数是偶数还是奇数

#include <stdio.h>

int main(void)
{
    int number_to_be_text, remainder;

    printf("Enter your number to be text: ");
    scanf("%i", &number_to_be_text);

    remainder = number_to_be_text % 2;

    if(remainder == 0)
        printf("The number is even.\n");

    if(remainder != 0)
        printf("The number is odd.\n");

    return 0;
}
