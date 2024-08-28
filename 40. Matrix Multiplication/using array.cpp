#include <stdio.h>
void addMatrices(int a[][100], int b[][100], int result[][100], int rows, int cols) 
{
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result[i][j] = a[i][j] + b[i][j];
}
void subtractMatrices(int a[][100], int b[][100], int result[][100], int rows, int cols) 
{
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result[i][j] = a[i][j] - b[i][j];
}
void multiplyMatrices(int a[][100], int b[][100], int result[][100], int rowsA, int colsA, int colsB) 
{
    for (int i = 0; i < rowsA; ++i)
        for (int j = 0; j < colsB; ++j) 
		{
            result[i][j] = 0;
            for (int k = 0; k < colsA; ++k)
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
    printf("Enter the number of rows for matrix A: ");
    scanf("%d", &rowsA);
    printf("Enter the number of columns for matrix A: ");
    scanf("%d", &colsA);
    printf("Enter elements for matrix A:\n");
    for (int i = 0; i < rowsA; ++i)
        for (int j = 0; j < colsA; ++j)
            scanf("%d", &matrixA[i][j]);
    printf("Enter the number of rows for matrix B: ");
    scanf("%d", &rowsB);
    printf("Enter the number of columns for matrix B: ");
    scanf("%d", &colsB);
    printf("Enter elements for matrix B:\n");
    for (int i = 0; i < rowsB; ++i)
        for (int j = 0; j < colsB; ++j)
            scanf("%d", &matrixB[i][j]);
    if (rowsA == rowsB && colsA == colsB) 
	{
        addMatrices(matrixA, matrixB, result, rowsA, colsA);
        printf("Matrix A + Matrix B:\n");
        displayMatrix(result, rowsA, colsA);
    } 
	else 
	{
        printf("Matrix addition not possible. Dimensions do not match.\n");
    }
    if (rowsA == rowsB && colsA == colsB) {
        subtractMatrices(matrixA, matrixB, result, rowsA, colsA);
        printf("Matrix A - Matrix B:\n");
        displayMatrix(result, rowsA, colsA);
    }
	else 
	{
        printf("Matrix subtraction not possible. Dimensions do not match.\n");
    }
    if (colsA == rowsB) 
	{
        multiplyMatrices(matrixA, matrixB, result, rowsA, colsA, colsB);
        printf("Matrix A * Matrix B:\n");
        displayMatrix(result, rowsA, colsB);
    } 
	else 
	{
        printf("Matrix multiplication not possible. Inner dimensions do not match.\n");
    }

    return 0;
}