#include <stdio.h>

//此程序计算一个数的绝对值
double absoluteValue(double x)
{
    if(x > 0)
        x = -x;

    return x;
}
//此程序计算平方根
double squareRoot (double x)
{
    const double espilon = 0.00001;
    double guess = 1.0;

    while(absoluteValue(guess * guess - x) >= espilon)
        guess = (x / guess + guess) / 2.0;

    return guess;
}


int main(void)
{
    printf("squareRoot(2.0) = %f\n", squareRoot(2.0));
    printf("squareRoot(144.0) = %f\n", squareRoot(144.0));
    printf("squareRoot(17.5) = %f\n", squareRoot(17.5));

    return 0;
}
