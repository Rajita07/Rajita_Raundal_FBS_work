#include <stdio.h>
void main()
{
int a,b,c;
a=10;
b=20;
c=a+b;
printf("Addition = %d",c);
}



//by given input 10 and 20, the output will be Addition = 30

//by user input
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    c = a + b;
    printf("Addition = %d\n", c);
}