//replaceString函数将返回一个值表示替换成功，并且替换所有的
//这个程序并没有用到返回一个值，能达到替换所有的目的，但是和题目中的要求有点不一样
#include <stdio.h>
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

void insertString(char s1[], const char insert[], int insertNumber)
{
    char s2[100];
    int i = 0, m = 0;
    int n = insertNumber;

    while(s1[m] != '\0')           //把字符串s2赋值为s1
    {
        s2[m] = s1[m];
        ++m;
    }
    s2[m] = '\0';

    while(insert[i] != '\0')
    {
        s1[insertNumber] = insert[i];
        ++insertNumber;
        ++i;
    }

    while(s2[n] != '\0')
    {
        s1[insertNumber] = s2[n];
        ++insertNumber;
        ++n;
    }
    s1[insertNumber] = '\0';
}


void replaceString(char source[], const char s1[], const char s2[])
{
    int findString(const char s1[], const char s2[]);
    void removeString(char s1[], int start, int counter);
    void insertString(char s1[], const char insert[], int insertNumber);

    int start = findString(source, s1);
    int counter, i = 0;

    while(s1[i] != '\0')
        ++i;

    counter = i;
    while(start != -1)
    {
        removeString(source, start, counter);
        insertString(source, s2, start);
        start = findString(source, s1);
    }
}

int main(void)
{
    char text[] = "I have a dream and have 1 dreame * ding word.";

    printf("%s\n", text);

    replaceString(text, "1", "one");
    printf("%s\n", text);

    replaceString(text, "a", "");
    printf("%s\n", text);

    replaceString(text, " ", "");
    printf("%s\n", text);

    return 0;

}
