//当为数位0到9时候返回非0值

#define IS_DIGIT(x) (((x)>=0 && (x)<= 9) ? 1 : 0)

//当为特殊字符时候，返回非0值

#define IS_SPECIAL(x) ((((x)>=0 && (x)<= 9) || ((x) >= 'a' && (x) <= 'z') || \
                                ((x) >= 'A' && (x) <= 'Z')) ? 0:1)

#include <stdio.h>

int main(void)
{
    printf("%i", IS_DIGIT(4));
    printf("%i", IS_DIGIT('2'));
    printf("%i", IS_SPECIAL('&'));
    printf("%i", IS_SPECIAL('a'));
    printf("%i", IS_SPECIAL(3));

    return 0;
}

