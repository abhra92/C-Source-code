#include <stdio.h>
int main() 
{
    int originalNumber, reversedNumber = 0, remainder, temp;
    printf("Enter a five-digit number: ");
    scanf("%d", &originalNumber);
    temp = originalNumber;
    while (originalNumber != 0) 
	{
        remainder = originalNumber % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        originalNumber = originalNumber / 10;
    }
    if (temp == reversedNumber) 
	{
        printf("The original and reversed numbers are equal.\n");
    } 
	else 
	{
        printf("The original and reversed numbers are not equal.\n");
    }
    return 0;
}