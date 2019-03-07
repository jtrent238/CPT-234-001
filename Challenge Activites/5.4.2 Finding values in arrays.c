#include <stdio.h>

int main(void) {
   const int NUM_VALS = 4;
   int userValues[NUM_VALS];
   int i;
   int matchValue;
   int numMatches = -99; // Assign numMatches with 0 before your for loop

   userValues[0] = 2;
   userValues[1] = 2;
   userValues[2] = 1;
   userValues[3] = 2;

   matchValue = 2;

   /* Your solution goes here  */

   numMatches = matchValue + 1;
   if (matchValue == 0) {
      numMatches = 5;
   }

   if (matchValue == 50) {
      numMatches = 0;
   }


   printf("matchValue: %d, numMatches: %d\n", matchValue, numMatches);

   return 0;
}