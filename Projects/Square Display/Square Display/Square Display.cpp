// Programmer:		Your Name
// Date:			Date
// Program Name:	The name of the program
// Chapter:			Chapter # - Chapter name
// Description:		2 complete English sentences describing what the program does,
//					algorithm used, etc.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations

	const int MIN_NUM = 1;
	const int MAX_NUM = 15;
	int userNum = 0;
	char userChar = 'X';

	// *** Your program goes here ***

	printf("Enter a number between %d and %d: ", MIN_NUM, MAX_NUM);
	scanf("%d", &userNum);

	printf("Enter the character to use: ");
	scanf(" %c", &userChar);

	printf("\n"); //blank line

	// Validation
	while (userNum < MIN_NUM || userNum > MAX_NUM)
	{
		// ERROR
		printf("The number entered, %d, is not between %d and %d." "\n", userNum, MIN_NUM, MAX_NUM);
		// Re-prompt
		printf("Enter a number between %d and %d: ", MIN_NUM, MAX_NUM);
		scanf("%d", &userNum);
	}

	for (int row = 1; row <= userNum; row++) {
		for (int col = 1; col <= userNum; col++) {
			printf("%c", userChar);
		}
		printf("\n"); // drops down 1 row
	}

	printf("\n"); // Blank line
	return 0;
} // end main()
