#include <stdio.h>
#include <math.h>

int main()
{
    int num, digit_count, first_digit, last_digit, a, b, swapNum;
    printf("Please Enter Two Digit Number- ");
    scanf("%d", &num);

    digit_count = log10(num);
    last_digit = num % 10;
    while (num >= 10)
    {
        num = num / 10;
    }

    first_digit = num;

    a = first_digit * (pow(10, digit_count));
    b = num % a;
    num = b / 10;
    swapNum = last_digit * (pow(10, digit_count)) + (num * 10 + first_digit);

    printf("%d", swapNum);
    return 0;
}