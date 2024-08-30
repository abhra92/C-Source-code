#include <stdio.h>
int main() 
{
    int year, day, month = 1;
    printf("Enter a year (e.g., 2023): ");
    scanf("%d", &year);
    if (month < 3) 
	{
        month += 12;
        year--;
    }
    day = (1 + 13 * (month + 1) / 5 + year % 100 + year % 100 / 4 + year / 400 - 2 * (year / 100)) % 7;
    switch (day) 
	{
        case 0:
            printf("Sunday\n");
            break;
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid day\n");
    }
    return 0;
}