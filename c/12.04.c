//定义一个宏，返回三个数的最小值

#define MAX1(a, b) (((a) > (b)) ? (a): (b))
#define MAX(a, b, c)  (((MAX1(a, b)) > (c)) ? (MAX1(a, b)) : (c))

#include <stdio.h>

int main(void)
{
    int a, b, c;

    scanf("%i %i %i", &a, &b, &c);
    printf("%i", MAX(a, b, c));

    return 0;
}
