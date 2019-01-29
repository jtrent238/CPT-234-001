#include <stdio.h>

int main(void) {
   int    userInt;
   double userDouble;
   
   // FIXME: Define char and string variables similarly
   char userChar;
   char userString[50];
   
   
   printf("Enter integer:\n");
   scanf("%d", &userInt);

// FIXME (1): Finish reading other items into variables, then output the four values on a single line separated by a space
   printf("Enter double:" "\n");
   scanf("%lf", &userDouble);
   printf("Enter character:" "\n");
   scanf(" %c", &userChar);
   printf("Enter string:" "\n"); 
   scanf("%s", userString);
   
   printf("%d %lf %c %s" "\n", userInt, userDouble, userChar, userString);
   
   // FIXME (2): Output the four values in reverse
   printf("%s %c %lf %d" "\n", userString, userChar, userDouble, userInt);
   
   // FIXME (3): Cast the double to an integer, and output that integer
   printf("%lf cast to an integer is %d" "\n", userDouble, (int)userDouble);
   
   return 0;
}