#include <stdio.h>

void main() {


    char str[100];
    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == ' ') str[i] = '#';

    printf("Modified string: %s\n", str);
}
