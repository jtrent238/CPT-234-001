#include <stdio.h>

int main(void) {
   const int SCORES_SIZE = 4;
   int lowerScores[SCORES_SIZE];
   int i;

   lowerScores[0] = 5;
   lowerScores[1] = 0;
   lowerScores[2] = 2;
   lowerScores[3] = -3;

   /* Your solution goes here  */

   for (int i = 0; i < SCORES_SIZE; i++) {
      if (lowerScores[i] <= 0) {
         lowerScores[i] = 0;
      } else {
         lowerScores[i] = lowerScores[i] - 1;
      }
   }

   for (i = 0; i < SCORES_SIZE; ++i) {
      printf("%d ", lowerScores[i]);
   }
   printf("\n");

   return 0;
}