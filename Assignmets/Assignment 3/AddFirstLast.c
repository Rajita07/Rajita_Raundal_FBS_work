// 10. Add the (first and last) digit of a given number.

void main() {
    int num, firstDigit, lastDigit, sum;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    lastDigit = num % 10;
    
    while (num >= 10) {
        num /= 10;
    }
    
    firstDigit = num;
    
    sum = firstDigit + lastDigit;
    
    printf("Sum of first and last digit is: %d\n", sum);
}


// Using For Loop
// void main() {
//     int num, firstDigit, lastDigit, sum;
    
//     printf("Enter a number: ");
//     scanf("%d", &num);
    
//     lastDigit = num % 10;
    
//     for (; num >= 10; num /= 10) {
//         firstDigit = num;
//     }
    
//     sum = firstDigit + lastDigit;
    
//     printf("Sum of first and last digit is: %d\n", sum);
// }