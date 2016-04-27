//将一个字符串复制到另一个字符串

#include <stdio.h>

void copyString(char *to, char *from)
{
    for( ; *from != '\0'; ++from, ++to)
        *to = *from;

    *to = '\0';
}

//上面的函数等价于
/*
void copyString(char to[], char from[])
{
    int i;

    for(i = 0; from[i] != '\0'; ++i)
        to[i] = from[i];

    return 0;
}
*/

int main(void)
{
    void copyString(char *to, char *from);
    char string1[] = "A string to be copied.";
    char string2[50];

    copyString(string2, string1);
    printf("%s\n", string2);

    copyString(string2, "So is this.");  //表明将常量字符串传递时，实际上是传递的是该字符串的指针
    printf("%s\n", string2);

    return 0;
}
