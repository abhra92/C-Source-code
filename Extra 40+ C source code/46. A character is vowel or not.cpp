#include <stdio.h>
int main()
{
	char ch;
	printf ("Enter a character:");
	scanf ("%c",&ch);
	if (ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
	{
		printf ("\n %c is vowel",ch);
	}
	else
	{
		printf ("\n %c is consonant",ch);
	}
	return 0;
}