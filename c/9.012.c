//将一个字符串转换为浮点数

#include <stdio.h>

float strtoFloat(const char string[])
{
    int i, n, intValue, result = 0;
    float floatresult;

    for(i= 0; string[i] != '\0'; ++i)
        if(string[i] == '.')  //记录小数点所在的位置
           {
               n = i;
            printf("%i\n", n);}
        else         //把字符串转化为整数
        {
            intValue = string[i] - '0';
            result = result * 10 + intValue;
            printf("%i\n", result);
        }

        //加上小数点
        floatresult = result;
        for(n= n + 1; n != i; ++n )
            floatresult /= 10;

        return floatresult;
}

int main (void)
{
    float strtoFloat (const char string[]);

    printf("%f", strtoFloat("12.234"));

    return 0;
}
