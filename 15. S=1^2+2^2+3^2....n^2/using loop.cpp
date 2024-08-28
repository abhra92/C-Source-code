#include<stdio.h>
int main() 
{
  int n, i, sum = 0;
  printf("Enter Value of n :");
  scanf("%d", & n);
  for (i = 1; i <= n; i++) 
  {
    sum = sum + (i * i);
  }
  printf("\n Sum of Series = %d", sum);
  return 0;
}