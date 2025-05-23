#include <stdio.h>


//Type 1
// void sumFirstLast();
// void main()
// {
// sumFirstLast();

// }

// void sumFirstLast() 
// {
// int num, firstDigit, lastDigit, sum;

// printf("Enter a number: ");
// scanf("%d", &num);

// lastDigit = num % 10;
// while (num >= 10) {
// num /= 10;
// }
// firstDigit = num;

// sum = firstDigit + lastDigit;
// printf("Sum of first and last digit is: %d\n", sum);
// }


// Type 2 with parameter
void sumFirstLast(int num);
void main()
{
int num;
printf("Enter a number: ");
scanf("%d", &num);
sumFirstLast(num);
}
void sumFirstLast(int num) 
{
int firstDigit, lastDigit, sum;
lastDigit = num % 10;
while (num >= 10) {
    num /= 10;
}
firstDigit = num;
sum = firstDigit + lastDigit;
printf("Sum of first and last digit is: %d\n", sum);
}

// Type 3 with return value






