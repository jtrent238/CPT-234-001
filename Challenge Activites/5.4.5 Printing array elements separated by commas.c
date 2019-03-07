#include <stdio.h>

int main(void) {
   const int NUM_VALS = 4;
   int hourlyTemp[NUM_VALS];
   int i;

   hourlyTemp[0] = 90;
   hourlyTemp[1] = 92;
   hourlyTemp[2] = 94;
   hourlyTemp[3] = 95;

   /* Your solution goes here  */

   for(i = 0; i <= NUM_VALS - 1; i++){
      printf("%d", hourlyTemp[i]);
      if(i < NUM_VALS - 1){
			printf(", ");
		}
      
   }

   printf("\n");

   return 0;
}