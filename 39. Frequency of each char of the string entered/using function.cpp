#include <stdio.h>
void printCharacterFrequency(const char* str) 
{
    int frequency[128] = {0};
    for (int i = 0; str[i] != '\0'; ++i)
        frequency[(int)str[i]]++;
    printf("Character frequencies:\n");
    for (int i = 0; i < 128; ++i)
        if (frequency[i] > 0)
            printf("'%c': %d\n", (char)i, frequency[i]);
}
int main() 
{
    const int maxLength = 100;
    char inputString[maxLength];
    printf("Enter a string: ");
    puts(inputString, maxLength, stdin);
    inputString[ Strcspn(inputString, "\n")] = '\0';
    printCharacterFrequency(inputString);
    return 0;
}