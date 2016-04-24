//此程序对数组进行增或减排列

#include <stdio.h>

void sort (int a[], int n, int select)
{
    int i,j, temp;

    if(select == 1){
        for(i = 0; i < n-1; ++i)
            for(j = i + 1; j < n; ++j)
                if(a[i] > a[j]){
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
    }
    else{
        for(i = 0; i < n-1; ++i)
            for(j = i + 1; j < n; ++j)
                if(a[i] < a[j]){
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
    }
}

int main(void)
{
    int i,select;
    int array[16] = {34, -5, -6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11};

    void sort(int a[], int n, int select);

    printf("The array before the sort:\n");

    for(i = 0 ; i < 16; ++i)
        printf("%i  ", array[i]);

    sort(array, 16, 1);

    printf("\n\nThe array after the sort:\n");

    for(i = 0; i < 16; ++i)
        printf("%i  ", array[i]);

    sort(array, 16, -1);

    printf("\n\nThe array before the sort:\n");

    for(i = 0; i < 16; ++i)
        printf("%i  ", array[i]);

    return 0;
}
