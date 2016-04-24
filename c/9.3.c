//链接字符串

#include <stdio.h>

int main(void)
{
    void concat (char result[], const char str1[], const char str2[]);
    const char s1[] = { "Test " };
    const char s2[] = { "works." };
    char s3[20];

    concat (s3, s1, s2);

    printf("%s\n", s3);

    return 0;
}

//此函数链接两个字符

void concat (char result[], const char str1[], const char str2[])
{
    int i, j;

    //将str1添加到result中

    for(i = 0; str1[i] != '\0'; ++i)
        result[i] = str1[i];

    //将str2添加到result中

    for(j = 0; str2[j] != '\0'; ++j)
        result[i + j] = str2[j];

    //用一个空字符终止链接后的字符串

    printf("%i %i", i, j);

    result[i + j ] ='\0';
}
