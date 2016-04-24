//此程序确定一个数字是偶数还是奇数

#include <stdio.h>

int main(void)
{
    int number_to_text, remainder;

    printf("Enter your number to be text: ");
    scanf("%i", &number_to_text);

    remainder = number_to_text % 2;
    if(remainder == 0)
        printf("The number is even.\n");
    else
        printf("The number is odd.\n");

    return 0;
}
