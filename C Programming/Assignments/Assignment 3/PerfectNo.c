// 6. Check number is perfect or not.

//Using While Loop
void main() {
    int num, sum = 0, i = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (i < num) {
        if (num % i == 0) {
            sum += i;
        }
        i++;
    }

    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }
}



// Using For Loop

// void main() {
//     int num, sum = 0;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     for (int i = 1; i < num; i++) {
//         if (num % i == 0) {
//             sum += i;
//         }
//     }

//     if (sum == num) {
//         printf("%d is a perfect number.\n", num);
//     } else {
//         printf("%d is not a perfect number.\n", num);
//     }
// }