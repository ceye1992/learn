//此程序将一个整数数组排列为递增序列

#include <stdio.h>

void sort(int *a, int n)
{
    int *aptr1, *aptr2, temp;

    for( aptr1 = a; aptr1 < a + n -1; ++aptr1)
        for(aptr2 = aptr1 + 1; aptr2 < a + n; ++aptr2)
            if(*aptr1 > *aptr2){
                temp = *aptr1;
                *aptr1 = *aptr2;
                *aptr2 = temp;
            }
}

int main(void)
{
    void sort (int *begin, int n);
    int array[16] = {34, -5, 6, 0, 12, 100, 56, 22,
                    44, -3, -9, 12, 17, 22, 6, 11};

    int *arrayPtr = array;

    sort (arrayPtr, 16);

    arrayPtr = array;

    for(arrayPtr ; arrayPtr < array + 16; ++arrayPtr)
        printf("%i\n", *arrayPtr);

    return 0;
}
