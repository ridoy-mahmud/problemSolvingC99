#include <stdio.h>

int main()
{
    float c;
    printf("Enter the temperature in Celsius - ");
    scanf("%f", &c);

    printf("The temperature in Fahrenheit is = %.2fF", 1.8 * c + 32);
    return 0;
}