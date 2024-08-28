#include <stdio.h>
#include <string.h>
int main ()
{
	char a[20]="program";
	char b[20]={'p','r','o','g','r','a','m'};
	printf ("length of string a is=%zu\n",strlen(a));
	printf ("length of the string is=%zu",strlen(b));
	return 0;
}