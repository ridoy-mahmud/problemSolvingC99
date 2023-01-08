#include <stdio.h>

int main()
{
    long long decimal, temp, binary;
    int rem, res = 1;

    binary = 0;

    printf("Enter any decimal number: ");
    scanf("%lld", &decimal);
    temp = decimal;

    while (temp > 0)
    {
        rem = temp % 2;

        binary = (rem * res) + binary;

        temp /= 2;

        res *= 10;
    }

    printf("The Decimal Number is = %lld\n", decimal);
    printf("The Binary Number is = %lld", binary);

    return 0;
}