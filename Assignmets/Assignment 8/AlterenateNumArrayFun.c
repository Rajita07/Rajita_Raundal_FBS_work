#include <stdio.h>

void printAlternateElements(int arr[], int n);
void main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    printAlternateElements(arr, n);
}
void printAlternateElements(int arr[], int n)
{
    int i;
    printf("Alternate elements: ");
    for(i = 0; i < n; i += 2)
        printf("%d ", arr[i]);
    printf("\n");
}

