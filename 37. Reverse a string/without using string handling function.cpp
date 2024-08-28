#include <stdio.h>
#include <string.h>
int main() 
{
    const int maxLength = 100;
    char inputString[maxLength];
    printf("Enter a string: ");
    fgets(inputString, maxLength, stdin);
    inputString[strcspn(inputString, "\n")] = '\0';
    int length = strlen(inputString);
    for (int i = 0, j = length - 1; i < j; ++i, --j) 
	{
        char temp = inputString[i];
        inputString[i] = inputString[j];
        inputString[j] = temp;
    }
    printf("Reversed string: %s\n", inputString);
    return 0;
}