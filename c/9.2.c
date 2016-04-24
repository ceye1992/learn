//此函数计算一个字符串的字符个数

#include <stdio.h>

int stringLength (const char string[])
{
    int count = 0;

    while(string[count] != '\0')
        ++count;

    return count;
}

int main(void)
{
    int   stringLength(const char string[]);
    const char world1[] = {'a', 's', 't', 'e', 'r', '\0'};
    const char world2[] = {'a', 't', '\0'};
    const char world3[] = {'a', 'w', 'e', '\0'};

    printf("%i  %i  %i\n", stringLength (world1),
           stringLength (world2), stringLength(world3));

    return 0;
}
