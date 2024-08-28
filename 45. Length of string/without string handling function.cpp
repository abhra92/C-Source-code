#include <stdio.h>
#include <string.h>
int main ()
{
	char ch[100];
	int i;
	printf("enter string:"); 
	gets(ch);
	for (i=0;ch[i]!='\0';i++)
	{
	printf("the length of the string is %d\n",i); 
    }
	return 0;
}
