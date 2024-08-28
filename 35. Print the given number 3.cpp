#include <stdio.h>
int main ()
{
	int n,j,k=1,i;
	printf ("enter row number");
	scanf ("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=i;j++)
	{
	  printf ("%d",k);
	  k++;
    }
    printf ("\n");
    }
    return 0;
}