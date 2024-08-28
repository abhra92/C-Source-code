#include <stdio.h>
void matrixOperation(int a[][100], int b[][100], int result[][100], int rowsA, int colsA, int rowsB, int colsB, char operation) 
{
    for (int i = 0; i < rowsA; ++i)
        for (int j = 0; j < ((operation == '*') ? colsB : colsA); ++j) 
		{
            result[i][j] = 0;
            for (int k = 0; k < ((operation == '*') ? colsA : colsB); ++k)
                result[i][j] += a[i][k] * b[k][j];
        }
}
void displayMatrix(int matrix[][100], int rows, int cols) 
{
    for (int i = 0; i < rows; ++i) 
	{
        for (int j = 0; j < cols; ++j)
            printf("%d\t", matrix[i][j]);
        printf("\n");
    }
}

int main() 
{
    const int maxSize = 100;
    int matrixA[maxSize][maxSize], matrixB[maxSize][maxSize], result[maxSize][maxSize];
    int rowsA, colsA, rowsB, colsB;
    printf("Enter rows and columns for matrix A: ");
    scanf("%d%d", &rowsA, &colsA);
    printf("Enter elements for matrix A:\n");
    for (int i = 0; i < rowsA; ++i)
        for (int j = 0; j < colsA; ++j)
            scanf("%d", &matrixA[i][j]);
    printf("Enter rows and columns for matrix B: ");
    scanf("%d%d", &rowsB, &colsB);
    printf("Enter elements for matrix B:\n");
    for (int i = 0; i < rowsB; ++i)
        for (int j = 0; j < colsB; ++j)
            scanf("%d", &matrixB[i][j]);
    if (colsA != rowsB) 
	{
        printf("Matrix multiplication not possible. Inner dimensions do not match.\n");
        return 1;
    }
    matrixOperation(matrixA, matrixB, result, rowsA, colsA, rowsB, colsB, '+');
    printf("Matrix A + Matrix B:\n");
    displayMatrix(result, rowsA, colsA);
    matrixOperation(matrixA, matrixB, result, rowsA, colsA, rowsB, colsB, '-');
    printf("Matrix A - Matrix B:\n");
    displayMatrix(result, rowsA, colsA);
    matrixOperation(matrixA, matrixB, result, rowsA, colsA, rowsB, colsB, '*');
    printf("Matrix A * Matrix B:\n");
    displayMatrix(result, rowsA, colsB);
    return 0;
}