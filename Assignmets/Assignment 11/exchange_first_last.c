#include <stdio.h>

void main() 
{
    char str[100];
    int len = 0;
    printf("Enter a string: ");
    gets(str);

    while (str[len] != '\0') len++;

    if (len > 1) 
    {
        char temp = str[0];
        str[0] = str[len - 1];
        str[len - 1] = temp;
    }

    printf("Modified string: %s\n", str);
}
