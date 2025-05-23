void price();
void main()
 {
    price();
 }
 void price() {

    float price, discount = 0.0, finalAmount;
    char isStudent;

    printf("Enter the purchase amount: ");
    scanf("%f", &price);

 
    printf("Are you a student? (y/n): ");
    scanf(" %c", &isStudent);
 

    if (isStudent == 'y' || isStudent == 'Y') 
    {
        if (price > 500) {
            discount = 0.20 * price;               
        } else {
            discount = 0.10 * price;
        }
    } else
    {
        if (price > 600) {
            discount = 0.15 * price;
        } else {
            discount = 0.0; 
        }
    }

    finalAmount = price - discount;

  
    printf("Discount: %f\n", discount);
    printf("Amount to be paid: %f\n", finalAmount);
    printf("Thank you for shopping with us!\n");
    printf("Have a great day!\n");
    printf("Please visit us again!\n");

}