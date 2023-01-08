#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter The First Number - ");
    scanf("%d", &a);
    printf("Enter The Second Number - ");
    scanf("%d", &b);

    printf("Addition of %d + %d = %d \n", a, b, a + b);

    printf("Subtraction of  %d - %d = %d \n", a, b, a - b);

    printf("Multiplication of %d * %d = %d \n", a, b, a * b);

    printf("Division of %d / %d = %d \n", a, b, a / b);

    printf("Modulus of %d %% %d = %d \n", a, b, a % b);

    return 0;
}