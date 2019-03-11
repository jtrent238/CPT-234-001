#include <stdio.h>

int main(void) {

   double array[5];
   double max;
   
   printf("Enter weight 1:\n");
   scanf("%lf", &array[0]);
   printf("Enter weight 2:\n");
   scanf("%lf", &array[1]);
   printf("Enter weight 3:\n");
   scanf("%lf", &array[2]);
   printf("Enter weight 4:\n");
   scanf("%lf", &array[3]);
   printf("Enter weight 5:\n");
   scanf("%lf", &array[4]);
   printf("You entered: %lf %lf %lf %lf %lf \n\n", array[0], array[1], array[2], array[3], array[4]); 
   printf("Total weight: %lf\n", array[0]+array[1]+array[2]+array[3]+array[4]);
   printf("Average weight: %lf\n", (array[0]+array[1]+array[2]+array[3]+array[4])/5);
   for(int i = 0; i < 5; i++){
      if(max < array[i]){
         max = array[i];}
      
      
      
   }
   printf("Max weight: %lf\n", max);

   return 0;
}