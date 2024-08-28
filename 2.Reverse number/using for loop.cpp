#include<stdio.h>
int main()
{
    int Num,rev_Num=0,remainder,a; 
    printf("Enter the number to reverse: ");
    scanf("%d",&Num);
    a=Num;
    for(a=0;Num>0;a++)
	{
        remainder=Num%10;
        rev_Num=rev_Num*10+remainder;
        Num=Num/10;
    }
    printf("The Reverse no of %d is %d",a,rev_Num);
    return 0;
}