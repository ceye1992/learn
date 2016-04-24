//此程序求二次函数的根

#include <stdio.h>

//此程序计算绝对值
int absoluteValue(int x)
{
    if(x < 0)
        x = -x;

    return x;
}
//此程序求平方根
float squareRoot(int a, int b, int c)
{
    float ans1, x , guess = 1.0;
    float epsilon = 0.000001;

    x = b * b - 4 * a * c;

    while(absoluteValue(guess * guess - x) >= epsilon)
        guess = (x / guess + guess) / 2;

    return guess;
}

//此程序求平方根
void squar (int a, int b, int c)
{
    float ans1, ans2;

    if((b * b - 4 * a * c) < 0){
        printf("这些根是虚数");
    }
    else{
        ans1 = ( -b + squareRoot(a, b, c)) / (2 * a);
        ans2 = ( -b - squareRoot(a, b, c)) / (2 * a);
        printf("其中一个根为%f,另一个根为%f", ans1, ans2);
    }

}

int main (void)
{
    int a, b, c;


    printf("what's a, b, and c?\n");
    scanf("%i %i %i", &a, &b, &c);

     squar(a, b, c);

}
