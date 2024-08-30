#include <stdio.h>
int main() 
{
    float x1, y1, x2, y2, x3, y3;
    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the coordinates of the second point (x2, y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Enter the coordinates of the third point (x3, y3): ");
    scanf("%f %f", &x3, &y3);
    float slope1 = (y2 - y1) / (x2 - x1);
    float slope2 = (y3 - y2) / (x3 - x2);
    if (slope1 == slope2) 
	{
        printf("The three points are collinear and lie on the same straight line.\n");
    } else 
	{
        printf("The three points are not collinear.\n");
    }

    return 0;
}