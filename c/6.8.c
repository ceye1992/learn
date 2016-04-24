//使用变长数组生成斐波那契数
#include <stdio.h>

int main(void)
{
    int i, numFibs;

    printf("Hoe many Fibonacci numbers do you want (between 1 and 75)? ");
    scanf("%i", &numFibs);

    if(numFibs < 1 || numFibs > 75){
        printf("Bad numbers, sorry! \n");
        return 1;
    }

    unsigned long long int Fibonacci[numFibs];

    Fibonacci[0] = 0;  //定义
    Fibonacci[1] = 1;   //同上

    for(i = 2; i < numFibs; ++i)
        Fibonacci[i] = Fibonacci[i - 2] + Fibonacci[i - 1];

    for(i = 0; i < numFibs; ++i)
        printf("%lli ", Fibonacci[i]);

    printf("\n");
    return 0;
}
