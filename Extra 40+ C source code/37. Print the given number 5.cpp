#include <stdio.h>
int main()
{
    int rows = 4;
    int cols = 4; 
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            printf("*");
        }
        printf("\n");
    }
    return 0;
}