//从一个字符串中删去指定数目的字符

#include <stdio.h>

void removeString(char s1[], int start, int counter)
{
    char s2[100];
    int i= 0, m = start;

    while(s1[i] != '\0')   //复制s1
    {
        s2[i] = s1[i];
        ++i;
    }
    s2[i] = '\0';

    while(s2[m + counter] != 0)
    {
        s1[m] = s2[m + counter];
        ++m;
    }
    s1[m] = '\0';
}

int main (void)
{
    char text[] = "the wrong son";

    removeString(text, 4, 6);
    printf("%s", text);

    return 0;
}
