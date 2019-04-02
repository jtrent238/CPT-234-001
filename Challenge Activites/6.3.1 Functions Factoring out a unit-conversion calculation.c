#include <stdio.h>

double MphAndMinutesToMiles(double milesPerHour, double minutesTraveled) {
   
   double hoursTraveled;
   double milesTraveled;

   hoursTraveled = minutesTraveled / 60.0;
   milesTraveled = hoursTraveled * milesPerHour;
   
   return milesTraveled;
}

int main(void) {
   double milesPerHour = 70.0;
   double minutesTraveled = 100.0;

   printf("Miles: %lf\n", MphAndMinutesToMiles(milesPerHour, minutesTraveled));

   return 0;
}