#include <stdio.h>
void main() 
{
    int arr[] = {4, 5, 6, 7, 8}, i;
    int n = 5;

    printf("Even numbers: ");
    for(i = 0; i < n; i++)
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);

    printf("\nOdd numbers: ");
    for(i = 0; i < n; i++)
        if(arr[i] % 2 != 0)
            printf("%d ", arr[i]);
}
