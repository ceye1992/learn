//�˳������һ��ƽ����

#include <stdio.h>
//�˺�������һ������ֵ
float absoluteValue(float x)
{
    if(x < 0)
        x = -x;

    return x;
}

//�˺�������һ��ƽ����

float squareRoot( float x)
{
    float absoluteValue(float);
    float epsilon, guess = 1.0;


    printf("what's epsilon do you want?");
    scanf("%f", &epsilon);

    while (absoluteValue(guess * guess - x ) >= epsilon)
        guess = ( x / guess + guess) / 2.0;

    return guess;
}

float main (void)
{
    float  guess;
    float  number;


    printf("What's number do you want square?");
    scanf("%f", &number);

    guess = squareRoot(number);

    printf("%f", guess);

    return 0;
}

