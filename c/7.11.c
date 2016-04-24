#include <stdio.h>

void nultiplyBy2 (float array[], int n)
{
    int i;

    for(i = 0; i < n; ++i)
        array[i] *= 2;
}

int main (void)
{
    float floatVals[4] = {1.2f, -3.7f, 6.2f, 8.55f};
    int i;
    void nultiplyBy2 (float array[], int n);

    nultiplyBy2(floatVals, 4);

    for(i = 0; i < 4; ++i)
        printf("%.2f ", floatVals[i]);

    printf("\n");

    return 0;
}
