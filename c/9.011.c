//此程序将一个字符串转换为整数

#include <stdio.h>
#include <stdbool.h>

int strToInt(const char str[])
{
    int i, intValue, result = 0;
    bool isnagive = false;

    if(str[0] == '-')     //判断是否是负数
        isnagive = true;

    for(i = 1; str[i] != '\0'; ++i)
    {
        intValue = str[i] - '0';
        result = result * 10 + intValue;
    }

    if(isnagive)
        result = - result;

    return result;
}

int main(void)
{
    int strToInt(const char str[]);

    printf("%i\n", strToInt("245"));
    printf("%i\n", strToInt("-100") + 25);
    printf("%i\n", strToInt("13*15"));

    return 0;
}
