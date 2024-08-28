#include <stdio.h>
#include <string.h>
int main() 
{
  char str[100];
  int i, j;
  printf("Enter a string: ");
  scanf("%s", str);
  for (i = 0, j = strlen(str) - 1; i < j; i++, j--) 
  {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }
  if (strcmp(str, str) == 0) 
  {
    printf("The string is a palindrome.\n");
  } 
  else
  {
    printf("The string is not a palindrome.\n");
  }
  return 0;
}