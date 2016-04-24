#include <stdio.h>

//�˳������һ�����ľ���ֵ
double absoluteValue(double x)
{
    if(x > 0)
        x = -x;

    return x;
}
//�˳������ƽ����
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
