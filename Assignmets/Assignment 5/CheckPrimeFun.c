void prime();
void main() 
{
    prime();
}
void prime() {
    int num, i = 2, isPrime = 1; 

    printf("Enter a number to check if it is prime: ");
    scanf("%d", &num);

    if (num < 2) {
        isPrime = 0; 
    } else {
        while (i <= num / 2) { 
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
            i++;
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
}