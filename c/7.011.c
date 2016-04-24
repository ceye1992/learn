//此程序返回一个整数数组中的元素之和

#include <stdio.h>

int arraySum(int array[], int n)
{
    int i, sum = 0;

    for(i = 0; i < n; i++)
        sum += array[i];

    return sum;
}

int main(void)
{
    int n;
    int array[5] = {1, 2, 3, 4, 5};

    printf("%i", arraySum(array, 5) );

    return 0;

}
