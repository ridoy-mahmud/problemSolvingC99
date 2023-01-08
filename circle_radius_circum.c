#include <stdio.h>
#include <math.h>

int main()
{
    // Area of the Circle
    float PI = 3.1416, r, R;
    printf("Enter the Radius - ");
    scanf("%f", &r);
    R = pow(r, 2);

    printf("The Area of The Circle is - %.3f \n", PI * R);

    // Circumference of the Circle
    printf("The Circumference of the Circle is - %.3f \n", 2 * PI * r);

    return 0;
}