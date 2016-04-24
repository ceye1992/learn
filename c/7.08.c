//�˳�������κ����ĸ�

#include <stdio.h>

//�˳���������ֵ
int absoluteValue(int x)
{
    if(x < 0)
        x = -x;

    return x;
}
//�˳�����ƽ����
float squareRoot(int a, int b, int c)
{
    float ans1, x , guess = 1.0;
    float epsilon = 0.000001;

    x = b * b - 4 * a * c;

    while(absoluteValue(guess * guess - x) >= epsilon)
        guess = (x / guess + guess) / 2;

    return guess;
}

//�˳�����ƽ����
void squar (int a, int b, int c)
{
    float ans1, ans2;

    if((b * b - 4 * a * c) < 0){
        printf("��Щ��������");
    }
    else{
        ans1 = ( -b + squareRoot(a, b, c)) / (2 * a);
        ans2 = ( -b - squareRoot(a, b, c)) / (2 * a);
        printf("����һ����Ϊ%f,��һ����Ϊ%f", ans1, ans2);
    }

}

int main (void)
{
    int a, b, c;


    printf("what's a, b, and c?\n");
    scanf("%i %i %i", &a, &b, &c);

     squar(a, b, c);

}
