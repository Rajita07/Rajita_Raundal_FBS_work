// 9. Check the given number is palindrome or not.

void main() {
    int num, originalNum, reversedNum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        printf("%d is a Palindrome number.\n", originalNum);
    } else {
        printf("%d is not a Palindrome number.\n", originalNum);
    }
}


//Using For Loop
// void main() {
//     int num, originalNum, reversedNum = 0, remainder;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     originalNum = num;

//     for (; num != 0; num /= 10) {
//         remainder = num % 10;
//         reversedNum = reversedNum * 10 + remainder;
//     }

//     if (originalNum == reversedNum) {
//         printf("%d is a Palindrome number.\n", originalNum);
//     } else {
//         printf("%d is not a Palindrome number.\n", originalNum);
//     }
// }