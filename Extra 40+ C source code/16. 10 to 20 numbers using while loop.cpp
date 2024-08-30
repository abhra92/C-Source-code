#include <stdio.h>
int main() 
{
    int number = 10;
    printf("Numbers from 10 to 20 using a while loop:\n");
    while (number <= 20) 
	{
        printf("%d\n", number);
        number++;
    }
    return 0;
}