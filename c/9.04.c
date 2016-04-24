//提取字符串的一部分

#include <stdio.h>

//判断字符串有多少个数字
int numberOfString(const char source[])
{
    int number = 0;

    while( source[number] != '\0')
        ++number;

    return number;
}

void substring(const char source[], int start, int count,  char result[])
{
    int i = start;
    int ans = 0;
    int end;
    int numberOfString(const char source[]);

    if(numberOfString(source) <= start + count - 1)
        end = numberOfString(source);
    else
        end = start + count;

    for(i; i < end; ++i)
    {
        result[ans] = source[i];
        ans += 1;
    }

    result[ans] = '\0';
}

int main (void)
{
    const char source[] = "character";
    char result[5];

    substring("character", 4, 3, result);

    printf("%s\n", result);

    substring("two word", 4, 20, result);
    printf("%s\n", result);

    return 0;
}
