//  2.Write a program to check given 3 digit number is pallindrome or not.


void main()
{
    int n = 131;
    int a = n;

    int first_digit = n/100;
    int second_digit = n%10;
    int last_digit;
    
    if(first_digit == last_digit)
    {
        printf("%dPallindrome Number", a);
    }
    else
    {
        printf("%d Not a Pallindrome Number", a);
    }
}


//need to learn this code again