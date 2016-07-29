#define printint(n) printf("%i", x ## n)

#include <stdio.h>

int main(void)
{
    int i;

    for(i = 1; i < 100; ++i)
        printint(i);

    return 0;
}
