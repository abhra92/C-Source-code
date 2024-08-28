#include <stdio.h>
int main()
{
 int num, i = 1;
 printf("Enter any Number:");
 scanf("%d", &num);
 printf("Multiplication table of %d:",num);
 do
 {
  printf("\n%dx%d =%d",num,i,num*i);
  i++;
 }
 while (i <= 10);
 return 0;
}