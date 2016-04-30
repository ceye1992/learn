//将三个整数排列为递增序列

#include <stdio.h>

void sort3 (int *a, int *b, int *c)
{
    int temp;
    //先把最小的那个放在第一个
    if(*a > *b && *b < *c){
        temp = *a;
        *a = *b;
        *b = temp;
    }
    else if( *c < *b && *c < *a){
        temp = *a;
        *a = *c;
        *c = temp;
    }

    if( *b > *c){
        temp = *b;
        *b = *c;
        *c = temp;
    }

}

int main(void)
{
    int num1 = 4, num2 = 2, num3 = 3;

    int *ptr1 = &num1, *ptr2 = &num2, *ptr3 = &num3;

    printf("%i\n%i\n%i\n", *ptr1, *ptr2, *ptr3);

    sort3(ptr1, ptr2, ptr3);

        printf("%i\n%i\n%i\n", *ptr1, *ptr2, *ptr3);


    return 0;
}
