#include <stdio.h>

int PrintShampooInstructions(int numCycles) {
   
   if (numCycles < 1) {
      printf("Too few." "\n");
   } else if (numCycles > 4) {
      printf("Too many." "\n");
   } else {
      for (int i = 1; i < numCycles + 1; i++) {
         printf("%d: Lather and rinse." "\n", i);
      }
      printf("Done." "\n");
   }
   
   
   return;
}

int main(void) {
   PrintShampooInstructions(2);

   return 0;
}