#include <stdio.h>
int main() 
{
    int choice, p, b, f, m, pizza = 0, burger = 0, french_fries = 0, momo = 0;
    printf("1. Pizza\n2. Burger\n3. French Fries\n4. Momo\n");
    printf("Please select your choice from 1, 2, 3, 4: ");
    scanf("%d", &choice);
    switch (choice) 
	{
        case 1:
            printf("You selected Pizza.\n");
            printf("Please enter the quantity: ");
            scanf("%d", &p);
            pizza = 70 * p;
            printf("Your bill for Pizza is: %d\n", pizza);
            break;
        case 2:
            printf("You selected Burger.\n");
            printf("Please enter the quantity: ");
            scanf("%d", &b);
            burger = 40 * b;
            printf("Your bill for Burger is: %d\n", burger);
            break;
        case 3:
            printf("You selected French Fries.\n");
            printf("Please enter the quantity: ");
            scanf("%d", &f);
            french_fries = 45 * f;
            printf("Your bill for French Fries is: %d\n", french_fries);
            break;
        case 4:
            printf("You selected Momo.\n");
            printf("Please enter the quantity: ");
            scanf("%d", &m);
            momo = 50 * m;
            printf("Your bill for Momo is: %d\n", momo);
            break;
        default:
            printf("Invalid input.\n");
    }
    return 0;
}