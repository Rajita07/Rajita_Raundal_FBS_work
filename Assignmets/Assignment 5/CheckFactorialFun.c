void factorial();
void main() 
{
    factorial();
}
void factorial()
{
    int num, factorial = 1, i = 1;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    while (i <= num) {
        factorial *= i;
        i++;
    }
    printf("Factorial of %d is: %d\n", num, factorial);
}