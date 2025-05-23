#include <stdio.h>

void main() 
{
    char str[100];
    int n;
    printf("Enter a string: ");
    gets(str);
    printf("Enter index to remove: ");
    scanf("%d", &n);

    for (int i = n; str[i] != '\0'; i++)
        str[i] = str[i + 1];

    printf("Modified string: %s\n", str);
}
