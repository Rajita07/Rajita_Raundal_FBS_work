#include <stdio.h>

// Function: With parameter, without return type
void isPrimeRange(int n);
void main() 
{
    int n;
    printf("Enter the range: ");
    scanf("%d", &n);
    isPrimeRange(n);
}

void isPrimeRange(int n) {
    int i, j, isPrime;
    printf("Prime numbers between 1 and %d are: ", n);
    for (i = 2; i <= n; i++) {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

