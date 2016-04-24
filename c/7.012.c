//此程序对一个矩阵进行转置

#include <stdio.h>

int exchange_array(int a, int b, int array[a][b])
{
    int n, i, ex_array[a][b];

    for(i = 0; i < a; ++i)
        for(n = 0; n < b; ++n)
            ex_array[n][i] = array[i][n];

    for(i = 0; i < b; ++i){
        for(n = 0; n < a; ++n)
            printf("%5i", ex_array[i][n]);

        printf("\n");
        }

    return ex_array[b][a];
}

int main(void)
{
    int array[3][5] = {
                        {7, 16, 55, 13, 12},
                        {12, 10, 52, 0, 7},
                        {-2, 1, 2, 4, 9}
                        };

    exchange_array(3, 5, array);

    return 0;
}
