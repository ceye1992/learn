//判断一个字符串是否存在于另一个字符串中

#include <stdio.h>

int findString(const char s1[], const char s2[])
{
    int i = 0, n = 0;
    int tem;

    while(s1[i] != '\0')
    {
        ++i;
        if(s1[i] == s2[n])
        {
            tem = i;
            while(s1[tem] == s2[n])
            {
                ++tem;
                ++n;
            }
            if(s2[n] == '\0')
                return i;
        }
    }

    return -1;
}

int main(void)
{
    int findString(const char s1[], const char s2[]);
    int index;


    index = findString("a chatterbox", "hat");

    printf("%i", index);

    return 0;
}
