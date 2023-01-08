#include <stdio.h>

int main()
{
    int n, sum = 0, first_digit, last_digit;
    printf("Please Enter a Number - ");
    scanf("%d", &n);
    last_digit = n % 10;
    while (n >= 10)
    {
        n = n / 10;
    }
    first_digit = n;
    printf("\n First digit is - %d\t Last digit is - %d \n\n", first_digit, last_digit);
    printf("Sum of them is - %d + %d = %d", first_digit, last_digit, first_digit + last_digit);

    return 0;
}