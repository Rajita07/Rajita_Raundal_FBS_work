void upperlower();
void main()
{
    upperlower();
}
void upperlower()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch<='Z')
    {
        printf("%c is Uppercase", ch);
    }
    else if(ch >='a' && ch<='z')
    {
        printf("%c is Lowercase", ch);
    }
    else
    {
        printf("%c is not an alphabet", ch);
    }
}