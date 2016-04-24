#include <stdio.h>

int main(void)
{
    void scalarMultipy(int nRow, int nCols, int matrix[nRow][nCols], int scalar);
    void displayMatrix(int nRow, int nCols, int matrix[nRow][nCols]);
    int sampleMatrix[3][5] = {
                                {7, 16, 55, 13, 12},
                                {12, 10, 52, 0,7},
                                {-2, 1, 2, 4, 9},
                                };

    printf("Original matrix: \n");
    displayMatrix(3, 5, sampleMatrix);

    scalarMultipy(3, 5, sampleMatrix, 2);
    printf("\nMultiplied by 2: \n");
    displayMatrix(3, 5, sampleMatrix);

    scalarMultipy(3, 5, sampleMatrix, -1);
    printf("\nThen multiplied by -1: \n");
    displayMatrix(3, 5, sampleMatrix);

    printf("\n");

    return 0;
}

//此函数将一个矩阵乘以一个标量
void scalarMultipy (int nRow, int nCols, int matrix[nRow][nCols], int scalar)
{
    int row, cols;

    for(row = 0; row < nRow; ++row)
        for(cols = 0; cols < nCols; ++cols)
            matrix[row][cols] *= scalar;


}

void displayMatrix(int nRow, int nCols, int matrix[nRow][nCols])
{
    int row, cols;

    for(row = 0; row < nRow; ++row){
        for(cols = 0; cols < nCols; ++cols)
            printf("%5i", matrix[row][cols]);
        printf("\n");
    }

}
