#include <stdio.h> 
int biggest(int a, int b)
{
    if (a > b)
        return a;
    return b;
} 
int main(void)
{
    int a, b, c;
    printf("Enter three numbers: \na: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    printf("%d is the biggest of all three numbers.\n", biggest(biggest(a, b), c));
    return 0;
}