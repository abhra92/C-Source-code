#include<stdio.h>
#include<math.h>
int main()
{
  int i,bin=0,n,a[10];
  printf("Enter the Binary number:");
  scanf("%d",&n);
  for(i=0;n!=0;i++)
  {
    a[i]=n%10;
    n=n/10;
  }
  n=i;
  for(i=0;i<n;i++)
  {
    bin+=a[i]*pow(2,i);
  }
  printf("%d",bin);
  return 0;
}