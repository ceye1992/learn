//将一个整数值转换为一个字符串

#include <stdio.h>

void intToStr(int number, char result[])
{
    int i = 0, exnumber, right_digt = 0;

    if(number < 0)
    {
        i =  1;
        result[0] = '-';
        number = -number;
    }

    do  //颠倒数字
    {
        exnumber = number % 10;
        number = number / 10;
        right_digt = right_digt * 10 + exnumber;
    }
    while(number != 0);

    do   //开始进行转换
    {
        exnumber = right_digt % 10;
        result[i] = exnumber + '0' - 0;
        right_digt = right_digt / 10;
        ++i;
    }
    while(right_digt != 0);

    result[i] = '\0';
}

int main(void)
{
    void intToStr(int number, char result[]);
    char answer[100];
    int i;

    printf("-12345");
    intToStr(100, answer);

    for(i= 0; answer[i] != '\0'; ++i)
        printf("%c", answer[i]);

    return 0;
}
