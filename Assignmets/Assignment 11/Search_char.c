#include <stdio.h>

void main() 
{
    char str[100], ch;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character to search: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ch)
            printf("Character '%c' found at index %d\n", ch, i);
    }
}
