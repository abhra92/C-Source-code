#include <stdio.h>
#include <math.h>
int main() 
{
    float centerX, centerY, radius;
    printf("Enter the coordinates of the center of the circle (x, y): ");
    scanf("%f %f", &centerX, &centerY);
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float x, y;
    printf("Enter the coordinates of the point (x, y): ");
    scanf("%f %f", &x, &y);
    float distance = sqrt(pow((x - centerX), 2) + pow((y - centerY), 2));
    if (distance < radius) {
        printf("The point is inside the circle.\n");
    } else if (distance == radius) {
        printf("The point is on the circle.\n");
    } else {
        printf("The point is outside the circle.\n");
    }
    return 0;
}