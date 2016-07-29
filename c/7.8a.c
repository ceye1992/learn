/*此韩硕计算数字的平方根
如果传递一个负参数，将显示一条信息，
并且返回-1，0                    "*/

#include <stdio.h>

float absolueValue(float z)
{
    float x;

    if(x < 0)
        x = -x;

    return x;
}
float squareRoot(float x)
{
    const float epsilo = 0.00001;
    float guess = 1.0;
    float absolueValue (float x);

    if(x < 0)
    {
        printf("Negative arguement to squareRoot.\n");
        return -1.0;
    }

    while(absolueValue(guess * guess - x) >= epsilo )
        guess = (x / guess + guess) / 2.0;

    return guess;
}

int main(void)
{
    float number, value;
    float squareRoot(float x);

    printf("Give me a number.\n");
    scanf("%f", &number);

    value = squareRoot(number);
    printf("f",value);

    return 0;
}
