// 4. Check number is prime or not. 

//Using While Loop

void main() {
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


// Using For Loop

// void main() {
//     int num, i, isPrime = 1; 

//     printf("Enter a number to check if it is prime: ");
//     scanf("%d", &num);

//     if (num < 2) {
//         isPrime = 0; 
//     } else {
//         for (i = 2; i <= num / 2; i++) {
//             if (num % i == 0) {
//                 isPrime = 0; 
//                 break;
//             }
//         }
//     }

//     if (isPrime) {
//         printf("%d is a prime number.\n", num);
//     } else {
//         printf("%d is not a prime number.\n", num);
//     }
// }