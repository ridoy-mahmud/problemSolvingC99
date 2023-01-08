#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50];
    int i, s = 0;

    printf("Input a string : ");
    scanf("%s", str1);

    for (i = 0; str1[i] != '\0'; i++)
    {
        s++;
    }
    printf("The length of the string '%s' is : %d\n", str1, s);
    return 0;
}