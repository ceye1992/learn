//将一个字符串插入另一个字符串中

#include <stdio.h>

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

int main(void)
{
    char text[] = "the wrong song";
    void insertString(char s1[], const char insert[], int insertNumber);

    printf("%s\n", text);
    insertString(text, "per", 10);
    printf("%s\n", text);

    return 0;
}
