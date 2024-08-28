#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of n::\n");
    scanf("%d",&n);
    printf("The required numbers are::\n");
    for(i=1;i<=n;i++)
    {
        if(i%10!=0)
        printf("%d\n",i);
    }
    return 0;
}