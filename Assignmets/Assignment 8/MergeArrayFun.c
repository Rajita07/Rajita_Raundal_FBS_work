#include <stdio.h>

void mergeArrays(int a[], int b[], int c[], int n);
void main() 
{
    int a[3] = {1, 2, 3}, b[3] = {4, 5, 6}, c[6];
    mergeArrays(a, b, c, 3);
}
void mergeArrays(int a[], int b[], int c[], int n) 
{
    int i;
    for(i = 0; i < n; i++)
        c[i] = a[i];
    for(i = 0; i < n; i++)
        c[i + n] = b[i];

    printf("Merged array: ");
    for(i = 0; i < 2 * n; i++)
        printf("%d ", c[i]);
    printf("\n");
}

