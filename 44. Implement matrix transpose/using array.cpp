#include <stdio.h>
int main()
{
   int rows, cols;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   printf("Enter the number of columns: ");
   scanf("%d", &cols);
   int matrix[rows][cols];
   printf("Enter the matrix elements:\n");
   for (int i = 0; i < rows; i++) 
   {
     for (int j = 0; j < cols; j++) 
     {
        printf("Enter element [%d][%d]: ", i, j);
        scanf("%d", &matrix[i][j]);
     }
    }
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; i++) 
    {
      for (int j = 0; j < cols; j++) 
      {
         printf("%d\t", matrix[i][j]);
      }
      printf("\n");
    }
    int transpose[cols][rows];
    for (int i = 0; i < cols; i++) 
    {
      for (int j = 0; j < rows; j++) 
      {
         transpose[i][j] = matrix[j][i];
      } 
    }
    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < cols; i++) 
    {
      for (int j = 0; j < rows; j++) 
      {
         printf("%d\t", transpose[i][j]);
      }
      printf("\n");
    }
  return 0;
}