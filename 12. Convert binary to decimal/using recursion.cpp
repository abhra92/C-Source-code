#include <stdio.h>
#include <string.h>
int BinarytoDecimal(char binary[],int len, int i)
{
   if (i == len-1)
   return (binary[i] - '0');
   int temp=binary[i]-'0';
   temp=temp<<len-i-1;
   temp=temp+BinarytoDecimal(binary,len,i+1);
   return (temp);
}
int main(){
   char strBinary[] = "111";
   int length=strlen(strBinary);
   printf("Decimal Number of given binary number: %d",BinarytoDecimal(strBinary,length,0));
   return 0;
}