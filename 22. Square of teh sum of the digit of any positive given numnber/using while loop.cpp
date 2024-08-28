#include<stdio.h>
#include<conio.h>
int main()
{
    int num, rem, sum=0;
    printf("Enter any number: ");
    scanf("%d", &num);
    while(num>0)
    {
        rem = num%10;
        sum = sum + rem*rem;
        num = num/10;
    }
    printf("\nSum of Square of Digits = %d", sum);
    getch();
    return 0;
}