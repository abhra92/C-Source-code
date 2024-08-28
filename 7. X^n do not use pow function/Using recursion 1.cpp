#include <stdio.h>
// Function to calculate x^n
double power(double x, int n) 
{
    double result = 1.0;
    // Multiply x by itself |n| times
    for (int i = 0; i < (n < 0 ? -n : n); i++) 
	{
        result *= x;
    }
    // If n is negative, take the reciprocal
    if (n < 0) 
	{
        result = 1.0 / result;
    }
    return result;
}
int main() 
{
    double base;
    int exponent;
    // Input base and exponent
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    // Calculate and display result
    double result = power(base, exponent);
    printf("%.2lf^%d = %.2lf\n", base, exponent, result);
    return 0;
}