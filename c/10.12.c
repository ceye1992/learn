//此函数对于一个整数数组中的各个元素求和 第二版

#include <stdio.h>

int arraySum(int *array, const int n) //int *array是指向数组的指针, 对于array值的修改（不是array引用的值）不会影响到vaules的内容
{
    int sum = 0;
    int *const arrayEnd = array + n;  //指向数组的结尾

    for( ; array < arrayEnd; ++array )
        sum += *array;

    return sum;
}

int main(void)
{
    int arraySum(int *array, const int n);
    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};

    printf("The sum is %i\n", arraySum(values, 10));

    return 0;
}
