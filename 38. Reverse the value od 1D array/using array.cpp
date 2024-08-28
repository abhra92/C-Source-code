#include <stdio.h>
int main() 
{
    const int maxSize = 100;
    int arr[maxSize], size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    if (size <= 0 || size > maxSize) 
	{
        printf("Invalid array size\n");
        return 1;
    }
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i)
        scanf("%d", &arr[i]);
    for (int i = 0, j = size - 1; i < j; ++i, --j) 
	{
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf("Reversed array: ");
    for (int i = 0; i < size; ++i)
        printf("%d ", arr[i]); 
    printf("\n");
    return 0;
}