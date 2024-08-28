#include <stdio.h>
int main()
{
	int a[ ]={45,57,86,56,49};
	int n,i,j,t,size;
	n=sizeof (a)/sizeof (a[0]);
	for (i=0;i<n;i++)
	{
		for (j=i+i;j<n;j++)
		{
			if (a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf ("the sorted element list:\n");
	for (i=0;i<n;i++)
	{
		printf ("%d\n",a[i]);
	}
	return 0;
}
