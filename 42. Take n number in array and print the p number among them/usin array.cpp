#include <stdio.h>
int main()
{
	int a[ ]={97,27,8,10,12,14};
	int i,loc,flag=0,x;
	printf ("Enter the searching element");
	scanf ("%d",&x);
	for (i=0;i<6;i++)
	{
		if (x==a[i])
		{
			loc=i;
			flag=1;
			break;
		}
	}
		if (flag==1)
		{
			printf ("element %d present in %d position",x,loc);
		}
		else
		{
			printf ("elemet not found");
		}
	return 0;
}