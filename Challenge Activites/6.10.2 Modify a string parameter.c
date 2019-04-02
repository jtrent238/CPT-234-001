#include <stdio.h>
#include <string.h>

void MakeSentenceExcited(char* sentenceText) {

for (int i = 0; i < 50; i++){
		if (sentenceText[i] == '.'){
			sentenceText[i] = '!';
		}
	}
return;

}

int main(void) {
   const int TEST_STR_SIZE = 50;
   char testStr[TEST_STR_SIZE];

   strcpy(testStr, "Hello. I'm Miley. Nice to meet you.");
   MakeSentenceExcited(testStr);
   printf("%s", testStr);

   return 0;
}