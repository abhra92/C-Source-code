#include <stdio.h>
int main() 
{
    int n, first = 0, second = 1, next, i;
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);
    printf("Fibonacci sequence: ");
    if (n >= 1) 
	{
        printf("%d ", first);
    }
    if (n >= 2) 
	{
        printf("%d ", second);
    }
    for (i = 3; i <= n; i++)
	 {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    printf("\n");
    return 0;
}