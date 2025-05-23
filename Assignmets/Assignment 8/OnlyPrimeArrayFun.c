#include <stdio.h>

int isPrime(int num);

void main() 
{
    int arr[] = {2, 4, 5, 8, 11, 15};
    int n = 6;
    printPrimesInArray(arr, n);
}

void printPrimesInArray(int arr[], int n) 
{
    int i;
    printf("Prime numbers: ");
    for(i = 0; i < n; i++)
        if(isPrime(arr[i]))
            printf("%d ", arr[i]);
    printf("\n");
}

int isPrime(int num) 
{
    if(num < 2) return 0;
    for(int i = 2; i*i <= num; i++)
        if(num % i == 0) 
            return 0;
    return 1;
}

