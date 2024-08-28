#include <stdio.h>
#include <string.h>
int main ()
{
	char str[50]="1 2 3 4 5 6 7 8 9";
	printf ("the given string is =%s\n",str);
	printf ("after reversing the string is =%s",strrev(str));
	return 0;
}