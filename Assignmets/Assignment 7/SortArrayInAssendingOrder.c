#include <stdio.h>
void main() 
{
    int arr[] = {5, 2, 4, 1, 3}, i, j, temp;
    int n = 5;

    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(arr[i] > arr[j]) 
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
