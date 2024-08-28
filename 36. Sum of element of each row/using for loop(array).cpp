#include <stdio.h>
int main()
{
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int arr[rows][cols];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; ++i) 
	{
        for (int j = 0; j < cols; ++j) 
		{
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Sum of elements for each row:\n");
    for (int i = 0; i < rows; ++i) 
	{
        int rowSum = 0;
        for (int j = 0; j < cols; ++j) 
		{
            rowSum += arr[i][j];
        }
        printf("Row %d: %d\n", i + 1, rowSum);
    }
    return 0;
}