// 2.Print prime number in the given range 1 to n.

void main() {
    int n, i, j, count = 0;
    printf("Enter the range: ");
    scanf("%d", &n);
    printf("Prime numbers between 1 and %d are: ", n);
    for (i = 2; i <= n; i++) {
        count = 0;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                count++;
                break;
            }
        }
        if (count == 0) {
            printf("%d\n ", i);
        }
    }
}




// void main() {
//     int n, i, j, isPrime;

//     printf("Enter range (n): ");
//     scanf("%d", &n);

//     printf("Prime numbers between 1 and %d are:\n", n);

//     for (i = 2; i <= n; i++) {
//         isPrime = 1;
//         for (j = 2; j <= i / 2; j++) {
//             if (i % j == 0) {
//                 isPrime = 0;
//                 break;
//             }
//         }
//         if (isPrime == 1) {
//             printf("%d ", i);
//         }
//     }
//     printf("\n");
// }
