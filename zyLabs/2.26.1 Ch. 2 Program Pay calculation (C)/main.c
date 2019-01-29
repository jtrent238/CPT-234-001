#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

   /* Type your code here. */

   double payRate = 0.0;
   int hoursWorked = 0;
   
   printf("Enter the pay rate: $" "\n");
      scanf("%lf", &payRate);
   printf("Enter the number of hours worked: " "\n");
      scanf("%d", &hoursWorked);
   
   printf("Pay: $%.2lf", hoursWorked * payRate);
   
   return 0;
}