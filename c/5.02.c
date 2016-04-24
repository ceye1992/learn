//测试输入的两个数能否被整除

#include <stdio.h>

int main(void)
{
    int number1, number2;

    printf("Enter two number: ");
    scanf("%i %i", &number1, &number2);

    if(number1 % number2 == 0)
        printf("%i can be division by %i", number1, number2);
    else
        printf("Can't be division");

    printf("\n");
    return 0;
}
