//此程序计算第n个三角数

#include <stdio.h>

int triangularNumber (int n)
{
    int i, triangularNumber = 0;

    for(i = 1; i <= n; ++i)
        triangularNumber += i;

    return triangularNumber;
}

void calculaterTriangularNumber(int n)
{
    int triangularNumber(int n);

    printf("Triangular number %i is %i\n", n, triangularNumber(n));
}

int main(void)
{
    void calcuaterTriangualarNumber(int n);

    calculaterTriangularNumber(10);
    calculaterTriangularNumber(20);
    calculaterTriangularNumber(50);

    return 0;
}
