#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int numbers[n];
    for (int i = 0; i < n; i++) 
	{
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("The numbers you entered are:\n");
    for (int i = 0; i < n; i++) 
	{
        printf("%d\n", numbers[i]);
    }
    return 0;
}