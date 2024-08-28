#include <stdio.h>
int main() 
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(arr) / sizeof(arr[0]);
  int odd_arr[size];
  int odd_size = 0;
  for (int i = 0; i < size; i++) 
  {
    if (arr[i] % 2 != 0) 
	{
      odd_arr[odd_size] = arr[i];
      odd_size++;
    }
  }
  for (int i = 0; i < odd_size; i++) 
  {
    printf("%d ", odd_arr[i]);
  }
  return 0;
}