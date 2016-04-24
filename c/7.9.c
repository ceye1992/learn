//此函数找出一个数组中的最小值

#include <stdio.h>

int minimum (int values[10])
{
    int minValue, i;

    minValue = values[0];

    for(i = 0; i < 10; ++i)
        if(values[i] < minValue)
            minValue = values[i];

    return minValue;
}

int main (void)
{
    int scores[10], i, minSocres;
    int minimum(int values[10]);

    printf("Enter 10 socers.\n");

    for(i=0; i < 10; ++i)
        scanf("%i", &scores[i]);

    minSocres = minimum(scores);
    printf("\nMinmum socers is %i", minSocres);

    return 0;
}
