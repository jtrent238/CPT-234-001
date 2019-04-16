#include <stdio.h>

int main(void) {
   int* numItemsPtr = NULL;
   int numItems;

   numItems = 99;

 numItemsPtr = &numItems;
 printf("Items: %d\n",*numItemsPtr);

   return 0;
}