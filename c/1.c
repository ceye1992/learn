#include <stdio.h>

int main(void)
{
    int number, answer, right;
    printf("give me a number\n");
    scanf("%i", &number);

    answer = 0;

    while(number != 0){
        right = number % 10;
        number = number / 10;
        answer += right;
    }

    printf("%i", answer);

    return 0;
}
