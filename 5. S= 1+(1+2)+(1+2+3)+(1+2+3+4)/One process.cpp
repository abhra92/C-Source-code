#include <stdio.h>
int series_sum(int n)
{
    return ((n * (n + 1) * (2 * n + 4)) / 12);
}
int main()
{
    int n;    
    printf("Series:1+(1+2)+(1+2+3)+...+(1+2+3+...+n)\n");
    printf("Want some up to N terms?\nEnter the N term:");
    scanf("%d", &n);
    printf("Sum is:%d", series_sum(n));
    return 0;
}