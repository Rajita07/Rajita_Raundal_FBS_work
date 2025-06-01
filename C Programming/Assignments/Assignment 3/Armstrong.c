// 5. Check number is armstrong or not.

//Using While Loop

void main() {
    int num, originalNum, remainder, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        result += remainder * remainder * remainder;
        num /= 10;
    }

    if (result == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);
}


// Using For Loop
// void main() {
//     int num, originalNum, remainder, result = 0;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     originalNum = num;

//     for (; num != 0; num /= 10) {
//         remainder = num % 10;
//         result += remainder * remainder * remainder;
//     }

//     if (result == originalNum)
//         printf("%d is an Armstrong number.\n", originalNum);
//     else
//         printf("%d is not an Armstrong number.\n", originalNum);
// }