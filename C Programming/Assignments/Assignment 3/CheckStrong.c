 // 8. Check number is strong or not.

 void main() {
     int num, originalNum, remainder, sum = 0, i, fact;
 
     printf("Enter a number: ");
     scanf("%d", &num);
 
     originalNum = num;
 
     while (num != 0) {
         remainder = num % 10;
 
         fact = 1;
         for (i = 1; i <= remainder; i++) {
             fact *= i;
         }
 
         sum += fact;
         num /= 10;
     }
 
     if (sum == originalNum) {
         printf("%d is a Strong number.\n", originalNum);
     } else {
         printf("%d is not a Strong number.\n", originalNum);
     }
 }
 

 // Using For Loop
//  void main() {
//      int num, originalNum, remainder, sum = 0, i, fact;
 
//      printf("Enter a number: ");
//      scanf("%d", &num);
 
//      originalNum = num;
 
//      for (; num != 0; num /= 10) {
//          remainder = num % 10;
 
//          fact = 1;
//          for (i = 1; i <= remainder; i++) {
//              fact *= i;
//          }
 
//          sum += fact;
//      }
 
//      if (sum == originalNum) {
//          printf("%d is a Strong number.\n", originalNum);
//      } else {
//          printf("%d is not a Strong number.\n", originalNum);
//      }
//  }