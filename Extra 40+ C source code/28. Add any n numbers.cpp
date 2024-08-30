#include <stdio.h>
int main() {
    int n, i, num, sum = 0;
    printf("Enter how many numbers you want to take: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
        {
        printf("\nEnter the Number %d: ", i);
        scanf("%d", &num);
        sum = sum + num;
    }
    printf("\nThe Summation of %d numbers is = %d\n", n, sum);
    return 0;
}