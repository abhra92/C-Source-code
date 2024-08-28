#include <stdio.h>
int main()  
{
  int i, sum = 0;
  i = 1;
  do 
  {
    sum += i;
    i++;
  } 
  while (i <= 10);
  printf("The sum of the series is %d\n", sum);
  return 0;
}