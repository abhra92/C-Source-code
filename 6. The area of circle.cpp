#include <stdio.h>
int main() 
{
    double radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    area = 3.14 * radius * radius;
    printf("The area of the circle with radius %.2lf is %.2lf square units.\n", radius, area);
    return 0;
}