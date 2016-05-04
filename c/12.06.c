//给出一个宏当为大写字母时给出非0值

#define IS_UPPER_CASE(x) ( ((x) > 'A' && (x) < 'Z') ? 1 : 0 )

#include <stdio.h>

int main(void)
{
    printf("%i", IS_UPPER_CASE('c'));
    printf("%i", IS_UPPER_CASE('a'));
    printf("%i", IS_UPPER_CASE('F'));

    return 0;
}
