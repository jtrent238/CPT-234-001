#include <stdio.h>
#include <string.h>

int main(void) {
   char personName[100] = "Albert Johnson";
   char searchChar;
   char* searchResult = NULL;

   searchChar = 'J';

   searchResult = strchr(personName, searchChar);

   if (searchResult != NULL) {
      printf("Character found.\n");
   }
   else {
      printf("Character not found.\n");
   }

   return 0;
}