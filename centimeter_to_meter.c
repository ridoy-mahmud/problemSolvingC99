#include <stdio.h>

int main()
{

    // Centimeters to meter & kilometers conversion
    float l;
    printf("Enter the Length in Centimeter = ");
    scanf("%f", &l);

    printf("The Length in Meter is - %.2fM \n", l / 100);
    printf("The Length in Kilometer is - %.4fKM", l / 100000);

    return 0;
}