#include <stdio.h>

void CoordTransform(int xVal, int yVal, int* xValNew, int* yValNew){
 *xValNew = (xVal + 1) * 2;
 *yValNew = (yVal + 1) * 2;
 }

int main(void) {
   int xValNew;
   int yValNew;

   CoordTransform(3, 4, &xValNew, &yValNew);
   printf("(3, 4) becomes (%d, %d)\n", xValNew, yValNew);

   return 0;
}