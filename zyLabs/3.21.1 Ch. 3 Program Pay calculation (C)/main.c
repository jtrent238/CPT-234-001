#include <stdio.h>

int main(void) {

   /* Type your code here. */

   double payRate = 0.0;
   double hoursWorked = 0.0;
   double overTimeHours = 0.0;
   double overTime = 0.0;
   double overTimePay = 0.0;
   
   printf("Enter the pay rate: $");
      scanf("%lf", &payRate);
      
   printf("\n");
   
   printf("Enter the number of hours worked: ");
      scanf("%lf", &hoursWorked);
      
   printf("\n");
   
   if (hoursWorked > 40) {
      overTimeHours = hoursWorked - 40;
      overTime = overTimeHours * 1.5;
      overTimePay = overTime * payRate;
      hoursWorked = hoursWorked - overTimeHours;
   }
   
   
   printf("Pay: $%.2lf", (hoursWorked * payRate) + overTimePay);
   
   return 0;
}