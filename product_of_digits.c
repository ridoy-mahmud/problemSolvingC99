#include <stdio.h>

int main()
{
    int num, rem, pro;

    printf("\n Please Enter any number  :");
    scanf("%d", &num);

    for (pro = 1; num > 0; num = num / 10)
    {
        rem = num % 10;
        pro = pro * rem;
    }

    printf(" \n The product of digits of a given number is = %d\n", pro);

    return 0;
}