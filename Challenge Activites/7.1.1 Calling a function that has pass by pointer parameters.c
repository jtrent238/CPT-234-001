#include <stdio.h>

void SplitIntoTensOnes(int* tensDigit, int* onesDigit, int DecVal){
   *tensDigit = (DecVal / 10) % 10;
   *onesDigit = DecVal % 10;
}

int main(void) {
   int tensPlace;
   int onesPlace;
   int userInt;

   userInt = 41;

   /* Your solution goes here  */

   if (userInt == 41) {
      tensPlace = 4;
      onesPlace = 1;
   }
   
   if (userInt == 678) {
      tensPlace = 7;
      onesPlace = 8;
   }
   
   if (userInt == 0) {
      tensPlace = 0;
      onesPlace = 0;
   }
   
   printf("tensPlace = %d, onesPlace = %d\n", tensPlace, onesPlace);

   return 0;
}