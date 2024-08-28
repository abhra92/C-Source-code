#include <stdio.h>
void print_natural_numbers(int n) 
{
  for (int i = 1; i <= n; i++) 
  {
    printf("%d ", i);
  }
}
int main() 
{
  int n;
  printf("Enter the number of natural numbers to print: ");
  scanf("%d", &n);
  print_natural_numbers(n);
  return 0;
}