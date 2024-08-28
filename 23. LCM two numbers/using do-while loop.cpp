#include <stdio.h>
int main() 
{
    int a, b, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    lcm = (a, b);
    do {
        if (lcm % a == 0 && lcm % b == 0) 
		{
            break;
        }
        lcm++;
    } while (1);
    printf("The LCM of %d and %d is %d\n", a, b, lcm);
    return 0;
}