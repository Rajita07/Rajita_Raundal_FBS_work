// 7. Find factorial of number

//Using While Loop

void main() {
    int num, factorial = 1, i = 1;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    while (i <= num) {
        factorial *= i;
        i++;
    }
    printf("Factorial of %d is: %d\n", num, factorial);
}


//Using For Loop
// void main() {
//     int num, factorial = 1;
    
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     for (int i = 1; i <= num; i++) {
//         factorial *= i;
//     }
//     printf("Factorial of %d is: %d\n", num, factorial);
// }