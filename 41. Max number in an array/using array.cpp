#include <stdio.h>
int main() 
{
    int arr[] = {5, 8, 3, 12, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    for (int i = 1; i < size; ++i) 
	{
        if (arr[i] > max) 
		{
            max = arr[i];
        }
    }
    printf("The maximum number in the array is: %d\n", max);
    return 0;
}