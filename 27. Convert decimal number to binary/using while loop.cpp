#include<stdio.h>
int main()
{
  int n,r,m=1,bin=0;
  printf("Enter the Number :");
  scanf("%d",&n);
  while(n!=0)
  {
    r=n%2;
    bin=bin+(r*m);
    m=m*10;
    n=n/2;
  }
  printf("Binary Value :%d",bin);
  return 0;
}