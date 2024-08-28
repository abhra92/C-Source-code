#include <stdio.h>
int main ()
{
	char ch;
	printf ("\n Enter any character in upper case:");
	scanf ("%c",&ch);
	printf ("\n the '%c' character in lowercase is=%c",ch,ch+32);
	return 0;
}