//颠倒给定一个数的顺序

#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("Give me a number \n");
    scanf("%i", &num1);

    if(num1 < 0){
        num1 = (-1) * num1;
        while(num1!= 0){
            num2 = num1 % 10;
            num1 = num1 / 10;
            printf("%i", num2);
        }
        printf("-");
    }
    else{
        while(num1 != 0){
            num2 = num1 % 10;
            num1 = num1 / 10;
            printf("%i", num2);
        }
    }

    return 0;
}
