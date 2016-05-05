//计算参数的绝对值

#define ABSOLUTE_VALUE(x) ((x) < 0 ? -(x) : (x))

#include <stdio.h>

int main(void)
{
    printf("%i", ABSOLUTE_VALUE(-8+3));

    return 0;
}
