#include <stdio.h>

void SwapArrayEnds(int x[],int s ){ 
   int t; 
   t= x[s-1]; 
   x[s-1]=x[0]; 
   x[0]=t; 
} 

int main(void) {
   const int SORT_ARR_SIZE = 4;
   int sortArray[SORT_ARR_SIZE];
   int i;

   sortArray[0] = 10;
   sortArray[1] = 20;
   sortArray[2] = 30;
   sortArray[3] = 40;

   SwapArrayEnds(sortArray, SORT_ARR_SIZE);

   for (i = 0; i < SORT_ARR_SIZE; ++i) {
      printf("%d ", sortArray[i]);
   }
   printf("\n");

   return 0;
}