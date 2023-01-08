#include <stdio.h>
#include <math.h>

int main()
{
    int a, A;
    printf("Enter the Area - ");
    scanf("%i", &a);
    A = pow(a, 2);

    printf("The Area of The Square is %i", A);
    return 0;
}