//将字符串中的小写字符转换成大写字符， 运用的是ASCII编码中不同字符的顺序
//还可以用构造体的方法，

#include <stdio.h>

void uppercase(char string[])
{
    int i= 0;
    char upper = 'A' - 'a';

    for(i; string[i] != '\0'; ++i)
        string[i] = string[i] + upper;

}

int main(void)
{
    void uppercase(char string[]);
    char s1[] = "abcdefghijk\n";

    printf("%s", s1);

    uppercase(s1);
    printf("%s", s1);

    return 0;
}

