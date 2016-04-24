#include <stdio.h>

int main(void)
{
    int x, y, z, i;

    x = 0;
    y = 1;
    printf("%i %i ", x, y);

    z = 0;
    for(i = 1; i <= 13; ++i){
        z = x + y;
        x = y;
        y = z;
        printf("%i ", z);
    }

    return 0;
}
