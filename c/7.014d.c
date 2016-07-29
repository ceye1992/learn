//此程序对数组进行增或减排列

#include <stdio.h>

int array[16] = {34, -5, -6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11};
int select, n = 16;

void sort (void)
{
    int i,j, temp;

    if(select == 1){
        for(i = 0; i < n-1; ++i)
            for(j = i + 1; j < n; ++j)
                if(array[i] > array[j]){
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
    }
    else if(select == -1){
        for(i = 0; i < n-1; ++i)
            for(j = i + 1; j < n; ++j)
                if(array[i] < array[j]){
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
    }
}

int main(void)
{
    int i;


    printf("The array before the sort:\n");

    for(i = 0 ; i < 16; ++i)
        printf("%i  ", array[i]);

    printf("\nHow do you want?  1 or -1:");
    scanf("%i", &select);

    sort();

    printf("\n\nThe array after the sort:\n");

    for(i = 0; i < 16; ++i)
        printf("%i  ", array[i]);

    printf("\nHow do you want?  1 or -1:");
    scanf("%i", &select);


    sort();

    printf("\n\nThe array before the sort:\n");

    for(i = 0; i < 16; ++i)
        printf("%i  ", array[i]);

    return 0;
}
