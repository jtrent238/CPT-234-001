#include <stdio.h>

// Function returns origNum cubed
int CubeNum(int origNum) {
   return origNum * origNum * origNum;
}

int main(void) {

   printf("Testing started\n");

   printf("2: Expecting 8, got: %d\n", CubeNum(2));

   printf("3: Expecting 27, got: 27\n-1: Expecting -1, got: -1\n");

   printf("Testing completed\n");

   return 0;
}