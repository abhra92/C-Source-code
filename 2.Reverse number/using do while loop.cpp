#include<stdio.h>
int main()
{
    int n,a,r,s=0;    
    printf("Enter The Number:");
    scanf("%d",&n);
    a=n;
    do
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
	while(n>0);     
    printf("The Reverse Number of %d is %d",a,s);
    return 0;
}