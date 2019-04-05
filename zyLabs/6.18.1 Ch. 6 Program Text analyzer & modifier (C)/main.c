#include <stdio.h>

int GetNumOfCharacters(char str[]) {
   int i;
   for(i = 0; str[i] != 0; i++) {
      
   }
   return i;
}

void OutputWithoutWhitespace(char str[]) {
   int i;
   for(i = 0; str[i] != 0; i++) {
      if(str[i] != ' ' && str[i] != '\t') {
         printf("%c", str[i]);
      }  
   }
   printf("\n");
}

int main() {
   char str[1000];
   printf("Enter a sentence or phrase:\n");
   printf("\n");
   fgets(str, 1000, stdin);
   printf("You entered: %s\n", str);
   //printf("\n");
   printf("Number of characters: %d\n", GetNumOfCharacters(str));
   printf("String with no whitespace: ");
   OutputWithoutWhitespace(str);
   //printf("\n");
   return 0;
}