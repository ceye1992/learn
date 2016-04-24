#include <stdio.h>

int main (void)
{
    void scalarMultiply (int matrix[3][5], int scalar);
    void displayMatrix (int matrix[3][5]);
    int sampleMatrix[3][5] = {
                                {7, 16, 55, 13, 12},
                                {12, 10, 52, 0,7},
                                {-2, 1, 2, 4, 9},
                                };

    printf("Original matrix: \n");
    displayMatrix(sampleMatrix);

    scalarMultiply(sampleMatrix, 2);

    printf("\nMultiplied bu 2:\n");
    displayMatrix(sampleMatrix);

    scalarMultiply(sampleMatrix, -1);

    printf("\nThen multiplied by -1:\n");
    displayMatrix(sampleMatrix);

    return 0;
}

//此函数将3 * 5 数组乘以一个标量

void scalarMultiply(int matrix[3][5], int scalar)
{
    int row, colum;

    for (row = 0; row < 3; ++row)
        for(colum = 0; colum < 5; ++colum)
            matrix[row][colum] *= scalar;

    return 0;
}

void displayMatrix (int matrix[3][5])
{
    int row, colum;
    for(row = 0; row < 3; ++row){
        for(colum = 0; colum < 5; ++colum)
            printf("%5i", matrix[row][colum]);
        printf("\n");
    }

}
