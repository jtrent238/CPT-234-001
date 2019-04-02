#include <stdio.h>

void PrintPopcornTime(int bagOunces) {

   if (bagOunces < 3) {
      printf("Too small" "\n");
   }  else if (bagOunces > 10) {
      printf("Too large" "\n");
   }  else {
      printf("%d seconds" "\n", 6 * bagOunces);
   }

}

int main(void) {
   PrintPopcornTime(7);

   return 0;
}