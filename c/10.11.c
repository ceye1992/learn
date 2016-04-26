//此函数对于一个整数数组中的各个元素进行求和

#include <stdio.h>

int arraySum (int array[], const int n)
{
    int sum = 0, *ptr;
    int *const arrayEnd = array + n;

    for(ptr = array; ptr < arrayEnd ; ++ptr)  //这里运用arrayEnd是一种优化 可以运用ptr <=array +n,但是前者不用再循环中每次进行求值
        sum += *ptr;

    return sum;
}

int main(void)
{
    int arraySum(int array[], const int n);
    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};

    printf("The sum is %i\n", arraySum(values, 10));

    return 0;
}
