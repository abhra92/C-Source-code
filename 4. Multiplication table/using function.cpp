#include <stdio.h> 
void multiplicationTable(int num)
{
    printf("Multiplication Table for %d:\n",num);
    for (int i=1;i<=10;i++)
    {
        printf("%d*%d =%d\n",num,i,num*i); 
    }
} 
int main(void)
{
    int num;
    puts("Enter a number:");
    scanf("%d", &num);
    multiplicationTable(num);
}