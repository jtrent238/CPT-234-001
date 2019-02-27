#include <stdio.h>

int main(void) {

   double pay = 1;
   double hours = 1;
   double paypay = 0;
   double paypaypay = 0;
   double paything = 0;
   
   while (pay != 0){
      
      printf("Enter the pay rate (0 to quit): $");
      scanf("%lf", &pay);

      
      if (pay != 0){
               printf("\n");
      while (pay < 0){
         printf("   Pay rate must be positive.\n");
      printf("   Enter the pay rate (0 to quit): $");
      scanf("%lf", &pay);
      printf("\n");
         
      }
      printf("Enter the number of hours worked: ");
      scanf("%lf", &hours);
      printf("\n");
      
      while (hours <= 0){
         printf("   Hours worked must be positive.\n");
            printf("   Enter the number of hours worked: ");
            scanf("%lf", &hours);
            printf("\n");
         } 
         
      if (hours > 40){
      paything = hours - 40;
      paypaypay = pay * (hours - 40) * 1.5;
      paypay = pay * 40 + paypaypay;
      }
      else{
         paypay = pay * hours;
      }
      printf("Pay: $%.2lf\n\n", paypay);
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      }
      
      
   }
//printf("\n");

   return 0;
}