#include <stdio.h>

int main() 
{
    int A = 35, B = 25;
    printf("Addition: %d + %d = %d\n", A, B, A + B);
    printf("Subtraction: %d - %d = %d\n", A, B, A - B);
    printf("Multiplication: %d * %d = %d\n", A, B, A * B);
    if (B != 0) 
	{
        printf("Division: %d / %d = %lf\n", A, B, (double)A / B);
    } 
	else 
	{
        printf("Division by zero is undefined.\n");
    }    
    return 0;
}