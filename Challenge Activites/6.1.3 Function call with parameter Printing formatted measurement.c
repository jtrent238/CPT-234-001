#include <stdio.h>

PrintFeetInchShort(int myIntA, int myIntB) {
   printf("%d' %d\"\n", myIntA, myIntB);
}

int main(void) {
   PrintFeetInchShort(5, 8);   // Will be run with (5, 8), then (4, 11)

   return 0;
}