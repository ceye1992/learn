//更多指针的基础知识

#include <stdio.h>

int main(void)
{
    char c = 'Q';
    char *char_point = &c;

    printf("%c, %c\n", c, *char_point);

    c = '/';
    printf("%c, %c\n", c, *char_point);

    *char_point = '(';
    printf("%c, %C\n", c, *char_point);

    return 0;
}
