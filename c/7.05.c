//此程序用于计算很大或者很小的数的平方根

#include <stdio.h>

float absolute(float x)
{
    if(x < 0)
        x = -x;

    return x;
}


float squareRoot(float x)
{
    float epsilon = 0.0000001;
    float guess = 1.00;

    while( absolute((guess * guess) / x - 1) >= epsilon)
        guess = (x / guess + guess) / 2;

    return guess;
}

int main(void)
{
    printf("squagerRoot (0.0002) = %f\n", squareRoot(.0002));
    printf("squraeRoot (0.222222)= %f\n", squareRoot(0.222222));

    return 0;
}
