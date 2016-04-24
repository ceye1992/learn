//显示第一个数整除第二个数的结果

#include <stdio.h>

int main(void)
{
    int number1, number2;
    float answer;

    printf("Give me two number: ");
    scanf("%i %i", &number1, &number2);


    if(number2 == 0)
        printf("The division is zero");
    else{
        answer = number1 / number2;
        printf("the %i / %i = %.3f", number1, number2, answer);

    }


    return 0;
}
