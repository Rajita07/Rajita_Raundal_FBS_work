// 5. Accept the price from user. Ask the user if he is a student (user may say y or n). If he is a student and he has purchased
// more than 500 than discount is 20% otherwise discount is 10%.But if he is not a student then if he has purchased more than 600 
// discount is 15% otherwise there is not discount. 


void main() {
    float price, discount = 0.0, finalAmount;
    char isStudent;

    printf("Enter the purchase amount: ");
    scanf("%f", &price);

 
    printf("Are you a student? (y/n): ");
    scanf(" %c", &isStudent);
 

    if (isStudent == 'y' || isStudent == 'Y') {
        if (price > 500) {
            discount = 0.20 * price;
        } else {
            discount = 0.10 * price;
        }
    } else {
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
