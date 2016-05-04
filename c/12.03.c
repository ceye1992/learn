//定义一个宏，给出两个参数的最小值

#define MIN(a, b) ( ( (a) < (b) )? (a) : (b) )//会返回最小值
#define MAX(a, b, c) (( (a) > (b) ) ? (a) : (b) )//会返回最大值

#include <stdio.h>

int main(void)
{
    int a, b;

    scanf("%i %i", &a, &b);

    printf("%i", MIN(a, b));

    return 0;
}
