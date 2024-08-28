#include <stdio.h>
void printMultiplicationArray(int arr[], int size) 
{
    printf("Multiplication of the array elements: ");  
    for (int i = 0; i < size; ++i) 
	{
        int result = arr[i] * 2; 
        printf("%d ", result);
    }    
    printf("\n");
}
int main() 
{
    int numbers[] = {2, 4, 6, 8, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printMultiplicationArray(numbers, size);
    return 0;
}