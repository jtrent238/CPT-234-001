#include <stdio.h>

int main(void) {
   const int NUM_VALS = 4;
   int testGrades[NUM_VALS];
   int i;
   int sumExtra = -9999; // Assign sumExtra with 0 before your for loop

   testGrades[0] = 101;
   testGrades[1] = 83;
   testGrades[2] = 107;
   testGrades[3] = 90;

   /* Your solution goes here  */
	sumExtra = 0;

	for(i = 0; i <= NUM_VALS -1; i++){
		if(testGrades[i] > 100){
			sumExtra = sumExtra + (testGrades[i] - 100);
		}
	}
   printf("sumExtra: %d\n", sumExtra);
   return 0;
}