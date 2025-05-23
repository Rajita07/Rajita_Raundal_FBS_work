#include <stdio.h>

void fibonacciFun(int *n);
void main() 
{
    int arr[] = {2, 4, 5, 8, 11, 15}, i;
    int n = 6;

    printf("Prime numbers: ");
    for(i = 0; i < n; i++)
        if(isPrime(arr[i]))
            printf("%d ", arr[i]);
}

int isPrime(int num) 
{
    if(num < 2) return 0;
    for(int i = 2; i*i <= num; i++)
    { 
        if(num % i == 0) 
        return 0;
    }
    return 1;
}
