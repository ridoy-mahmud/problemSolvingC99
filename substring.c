#include <stdio.h>

int main()
{
    char string[1000], sub[1000];
    int position, length, c = 0;

    printf("Enter a String for operation : ");
    gets(string);

    printf("Enter the first length of the substring\n");
    scanf("%d", &length);

    printf("Enter the position the of substring\n");
    scanf("%d", &position);

    while (c < length)
    {
        sub[c] = string[position + c - 1];
        c++;
    }
    sub[c] = '\0';

    printf("The Substring is \"%s\"\n", sub);

    return 0;
}
