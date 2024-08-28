#include<stdio.h>    
void display(int);  
int main()  
{  
    int limit;  
    printf("Enter the number of terms to be printed:");  
    scanf("%d", &limit);   
    printf("Natural Numbers from 1 to %d are:\n", limit);  
    display(limit);  
    return 0;  
}   
void display(int num)  
{  
    if(num)  
        display(num-1);  
    else  
        return;  
  
    printf("%d ", num);  
}  