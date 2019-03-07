#include <stdio.h>

int main(void) {
   const int NUM_POINTS = 4;
   int dataPoints[NUM_POINTS];
   int minVal;
   int i;

   dataPoints[0] = 2;
   dataPoints[1] = 12;
   dataPoints[2] = 9;
   dataPoints[3] = 20;

   minVal = 10;

   /* Your solution goes here  */

   for (int i = 0; i < NUM_POINTS; i++) {
      if (dataPoints[i] < minVal) {
         dataPoints[i] = dataPoints[i] * 2;
      }
   }

   for (i = 0; i < NUM_POINTS; ++i) {
      printf("%d ", dataPoints[i]);
   }
   printf("\n");

   return 0;
}