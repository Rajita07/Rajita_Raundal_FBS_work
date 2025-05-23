#include <stdio.h>
void main() 
{
    int arr[] = {3, 6, 1, 8, 4}, sum = 0, i;
    int n = 5;

    for(i = 0; i < n; i++)
        sum += arr[i];

    printf("Sum = %d\n", sum);
}
