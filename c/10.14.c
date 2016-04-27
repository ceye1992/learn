//此程序将一个字符串复制给另一个字符串

#include <stdio.h>

void copyString(char *to, char *from)
{
    while(*from)  //利用了空字符等于数值0
        *to++ = *from++;  //获取from指向的字符， 然后递增from，使其指向源字符串中的下一个字符

    *to = '\0';
}

int main(void)
{
    void copyString(char *to, char *from);
    char string1[] = "A string to be copied.\n";
    char string2[50];

    copyString(string2, string1);
    printf("%s", string2);

    copyString(string2, "So is this");
    printf("%s", string2);

    return 0;
}
