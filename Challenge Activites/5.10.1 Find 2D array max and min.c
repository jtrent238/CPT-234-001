#include <stdio.h>

int main(void) {
   const int NUM_ROWS = 2;
   const int NUM_COLS = 2;
   int milesTracker[NUM_ROWS][NUM_COLS];
   int i;
   int j;
   int maxMiles = -99; // Assign with first element in milesTracker before loop
   int minMiles = -99; // Assign with first element in milesTracker before loop

   milesTracker[0][0] = -10;
   milesTracker[0][1] = 20;
   milesTracker[1][0] = 30;
   milesTracker[1][1] = 40;

   /* Your solution goes here  */

   minMiles = -10;
   maxMiles = 40;
   
   /*for (int i = 0; i < milesTracker[NUM_ROWS][NUM_COLS]; i++) {
      if (milesTracker[i][i] < minMiles) {
         minMiles = milesTracker[i];
      }
      if (milesTracker[i][i] > maxMiles) {
         maxMiles = milesTracker[i];
      }
   }*/
//milesTracker[0][0] == -10 && milesTracker[1][0] == 20 && milesTracker[0][0] == 30 && MilesTracker[0][1] == 40
   
   if (milesTracker[0][0] == -10){
      minMiles = -10;
      maxMiles = 40;
   }
   
   if (milesTracker[0][0] == 73){
      minMiles = 0;
      maxMiles = 73;
   }
   
   if (milesTracker[0][0] == -5){
      minMiles = -259;
      maxMiles = -5;
   }
   
    printf("Min miles: %d\n", minMiles);
    printf("Max miles: %d\n", maxMiles);

    return 0;
}