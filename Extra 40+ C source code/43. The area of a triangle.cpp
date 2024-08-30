#include <stdio.h>
int main ()
{
    float a,b,c,area,semi;
 	printf ("\n Enter 3 sides of a triangle:");
 	scanf ("%f %f %f",&a,&b,&c);
 	semi=(a+b+c)/2;
 	area=(semi*(semi-a)*(semi-b)*(semi-c));
 	printf ("\n the area of the given triangle is=%f",area);
 	return 0;
} 
