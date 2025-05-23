#include <stdio.h>

void main() 
{
    char s1[100], s2[100];
    int len1 = 0, len2 = 0;
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    while (s1[len1] != '\0') len1++;
    while (s2[len2] != '\0') len2++;

    if (len1 > len2)
        printf("Larger string: %s\n", s1);
    else if (len2 > len1)
        printf("Larger string: %s\n", s2);
    else
        printf("Both strings are equal in length.\n");
}
