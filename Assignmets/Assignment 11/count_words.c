#include <stdio.h>

void main() 
{
    char str[100];
    int count = 0, inWord = 0;
    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] != ' ' && inWord == 0) 
        {
            inWord = 1;
            count++;
        } else if (str[i] == ' ') 
        {
            inWord = 0;
        }
    }

    printf("Number of words: %d\n", count);
}
