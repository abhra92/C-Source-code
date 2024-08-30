#include <stdio.h>
int main() 
{
    int number = 10;
    printf("Numbers from 10 to 20 using a do-while loop:\n");
    do 
	{
        printf("%d\n", number);
        number++;
    } 
	while (number <= 20);
    return 0;
}