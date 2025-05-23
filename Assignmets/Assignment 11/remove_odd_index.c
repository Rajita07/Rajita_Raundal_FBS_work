#include <stdio.h>

void main() 
{
    char str[100], result[100];
    int j = 0;
    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
        if (i % 2 == 0)
            result[j++] = str[i];

    result[j] = '\0';
    printf("Modified string: %s\n", result);
}
