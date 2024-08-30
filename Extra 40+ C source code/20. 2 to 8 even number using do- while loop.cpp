#include <stdio.h>
int main()
{
    int number = 2;
    printf("Even numbers from 2 to 8 using a do-while loop:\n");
    do 
	{
        printf("%d\n", number);
        number += 2; 
    }
	while (number <= 8);
    return 0;
}