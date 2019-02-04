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

	int num1 = 0;
	int num2 = 0;
	int smallNum = 0;
	int largeNum = 0;

	// *** Your program goes here ***

	// *** INPUT ***
	printf("Enter an integer: ");
		scanf("%d", &num1);
	printf("Enter another integer: ");
		scanf("%d", &num2);

	// *** PROCESSING ***
		if (num1 < num2) {
			smallNum = num1;
			largeNum = num2;
		}
			else {
				smallNum = num2;
				largeNum = num1;
			}

	// *** OUTPUT ***
		printf("%d is the smaller number. %d is the larger number." "\n", smallNum, largeNum);

		printf("\n"); //blank line

	return 0;
} // end main()
