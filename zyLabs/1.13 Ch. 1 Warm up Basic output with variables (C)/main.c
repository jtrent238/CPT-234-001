#include <stdio.h>

int main(void) {
   int userNum;
   int userNum2;
   int userNumSquared;
   int userNumCubed;
   int userNumAdd;
   int userNumMultiply;
   
   printf("Enter integer:\n");
   scanf("%d", &userNum);
   scanf("%d", &userNum2);
   scanf("%d", &userNumSquared);
   scanf("%d", &userNumCubed);
   scanf("%d", &userNumAdd);
   scanf("%d", &userNumMultiply);
   
   /* Type your code here. */

   printf("You entered: %d" "\n", userNum);
   printf("%d squared is ", userNum);
      userNumSquared = userNum * userNum; //Gets the square root of user input
   printf("%d" "\n", userNumSquared);
   printf("And %d cubed is ", userNum);
      userNumCubed = userNumSquared * userNum; //Cubes the users input
   printf("%d!!" "\n", userNumCubed);
   printf("Enter another integer:" "\n");
   printf("%d", userNum);
   printf(" + %d is ", userNum2);
      userNumAdd = userNum + userNum2; //Add the two user inputs
   printf("%d" "\n", userNumAdd);
   printf("%d", userNum);
   printf(" * %d is ", userNum2);
      userNumMultiply = userNum * userNum2; //Multiply the two user inputs
   printf("%d" "\n", userNumMultiply);
   
   return 0;
}