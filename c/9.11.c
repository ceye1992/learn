//此函数将一个字符串转换为整数

#include <stdio.h>

int strToInt(const char string[])
{
    int i, intValue, result = 0;

    for(i = 0; string[i] >= '0' && string[i] <= '9'; ++i)
    {
        intValue = string[i] - '0';
        result = result * 10 + intValue;
    }

    return result;
}

int main(void)
{
    int strToInt( const char string[]);

    printf("%i\n", strToInt("245"));
    printf("%i\n", strToInt("100") + 25);
    printf("%i\n", strToInt("13*15"));

    return 0;
}
