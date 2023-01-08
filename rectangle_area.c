#include <stdio.h>

int main()
{
    int length, width;
    printf("Enter the Length -");
    scanf("%d", &length);

    printf("Enter the Width -");
    scanf("%d", &width);

    printf("Area of the Rectangle is %d \n", length * width);
    return 0;
}