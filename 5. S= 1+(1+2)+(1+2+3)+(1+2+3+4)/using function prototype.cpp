#include <stdio.h>  
//function prototype 
void summation(int); 
void seriesPrinter(int); 
int main() 
{ 
	int n; 
	printf("Enter the limit of the series: "); 
	scanf("%d",&n); 
	printf("\n"); 
	seriesPrinter(n); 
	summation(n); 
	return 0; 
} 
// defining the function 
void summation(int n) 
{ 
	int sum = (n*(n+1)*(n+2))/6; 
	printf("%d",sum); 
} 
void seriesPrinter(int n) 
{ 
	int count = 1; 
	int nextTerm = count + 1; 
	for(nextTerm = count + 1;nextTerm<=n+1;nextTerm++) 
	{ 
		printf("("); 
		for(count = 1;count<nextTerm;count++) 
		{ 
			printf("%d",count); 
			if(count != nextTerm-1) 
			{ 
				printf("+"); 
			} 
			else 
			{ 
				; 
			} 
		} 
		printf(")"); 
		if(nextTerm == n+1) 
		{ 
			; 
		} 
		else 
		{ 
			printf("+"); 
		} 
		 
	} 
	printf("="); 
} 