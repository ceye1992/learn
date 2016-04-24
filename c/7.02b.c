//此程序计算一个三角数

#include <stdio.h>
int triangularNumber (int n)
{
    int i, triangularNumber = 0;

    for(i = 1; i <= n; ++i)
        triangularNumber += i;

    return triangularNumber;
}

int main (void)
{
    int triangularNumber(int n);
    int number, counter;

    for(counter = 1; counter <= 5; ++counter){
        printf("What triangular number do you want?");
        scanf("%i", &number);

        triangularNumber(number);
        printf("Triangularnumber %i is %i \n\n", number, triangularNumber(number));


    }
    return 0;
}
