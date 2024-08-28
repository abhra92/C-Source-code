#include <stdio.h>
int main() 
{
    float costPrice, sellingPrice, profitOrLoss;
    printf("Enter the cost price: ");
    scanf("%f", &costPrice);
    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);
    profitOrLoss = sellingPrice - costPrice;
    if (profitOrLoss > 0) 
	{
        printf("Profit of %.2f\n", profitOrLoss);
    } 
	else if (profitOrLoss < 0) {
        printf("Loss of %.2f\n", -profitOrLoss); 
    } 
	else 
	{
        printf("No profit, no loss\n");
    }
    return 0;
}