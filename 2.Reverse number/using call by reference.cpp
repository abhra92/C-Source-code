#include<stdio.h>
void reverse(int n, int *rev) 
{
    int r, re=0;
    while (n > 0) 
	{
        r = n % 10;
        re = re * 10 + r;
        n = n / 10;
    }
    *rev = re;
}
int main() 
{
    int n, rev = 0;
    printf("Enter a number:");
    scanf("%d",&n);
    reverse(n, &rev);
    printf("Reverse number is:%d", rev);
    return 0;
}