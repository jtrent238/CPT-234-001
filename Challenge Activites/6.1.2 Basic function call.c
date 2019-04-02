#include <stdio.h>

void OutputMinutesAsHours(double origMinutes) {

   double myHours = 0;
   scanf("%lf", &origMinutes);
   myHours = origMinutes / 60;
   printf("%lf", origMinutes / 60);
   return origMinutes / 60;

}

int main(void) {

   OutputMinutesAsHours(210.0); // Will be run with 210.0, 3600.0, and 0.0.
   printf("\n");

   return 0;
}