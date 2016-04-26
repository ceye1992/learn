//用指针交换值，关于指针和函数的更多内容

#include <stdio.h>

void exchange (int *const point1, int *const point2)
{
    int temp;

    temp = *point1;  //temp赋值为指针point1所指定的值
    *point1 = *point2;
    *point2 = temp;
}

int main (void)
{
    void exchange (int *const point1, int *const point2);
    int i1 = -5, i2 = 66, *p1 = &i1, *p2 = &i2;

    printf("i1 = %i, i2 = %i\n", i1, i2);

    exchange(p1, p2);
    printf("i1= %i, i2 = %i\n", i1, i2);

    exchange(&i1, &i2);
    printf("i1= %i, i2 = %i\n", i1, i2);

    return 0;
}
