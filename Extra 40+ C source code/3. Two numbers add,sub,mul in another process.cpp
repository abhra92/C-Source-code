#include <stdio.h>
int main() 
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1); 
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);
    if (num2 != 0)
	{
        printf("Division: %d / %d = %lf\n", num1, num2, (double)num1 / num2);
    } 
	else
	{
        printf("Division by zero is undefined.\n");
    }
    return 0;
}