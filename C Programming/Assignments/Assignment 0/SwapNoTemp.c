#include <stdio.h>
void main() {
    int a, b, temp; // int a = 10, b = 20, temp = 0;
    a = 10;
    b = 20;

    temp = a;
    a = b;
    b = temp;

    printf("After Swap\n");
    printf("a = %d\n", a); 
    printf("b = %d\n", b); 
}



//by given input 10 and 20, the output will be After Swap a=20 b=10

//by user input
#include <stdio.h>
void main() {
    int a, b, temp;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After Swap\n");
    printf("a = %d\n", a); 
    printf("b = %d\n", b); 
}
