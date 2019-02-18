// Programmer:		Jonathan Trent Patterson
// Date:			2/18/2019
// Program Name:	Histogram
// Chapter:			Chapter 4 - Repetition  
// Description:		This program gets a number from the user and displays a histogram.
//					It does it 3 times.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations

	// Variables
	int userNum = 0;
	int userNum2 = 0;
	int userNum3 = 0;
	int myNum = 0;
	int myNum2 = 0;
	int myNum3 = 0;

	const int MAX_NUMBER = 40;
	
	// *** Your program goes here ***

	// Gets input from user for number 1
	printf("Enter a non-zero positive number less than %d: ", MAX_NUMBER);
		scanf("%d", &userNum);
		// Ask user to enter a new number if it is above Max number (40)
		while (userNum > MAX_NUMBER) {
			printf("The number entered was greater than %d" "\n", MAX_NUMBER);
			printf("Please re-enter: ");
			scanf("%d", &userNum);
		}
		// Creates the histogram for number 1
		while (myNum < userNum) {
			printf("*");
			myNum++;
		}

		printf("\n"); //blank line

		// Gets input from user for number 2
		printf("Enter another non-zero positive number less than %d: ", MAX_NUMBER);
		scanf("%d", &userNum2);
		// Ask user to enter a new number if it is above Max number (40)
		while (userNum2 > MAX_NUMBER) {
			printf("The number entered was greater than %d" "\n", MAX_NUMBER);
			printf("Please re-enter: ");
			scanf("%d", &userNum2);
		}
		// Creates the histogram for number 2
		while (myNum2 < userNum2) {
			printf("*");
			myNum2++;
		}

		printf("\n"); //blank line

		// Gets input from user for number 1
		printf("Enter another non-zero positive number less than %d: ", MAX_NUMBER);
		scanf("%d", &userNum3);
		// Ask user to enter a new number if it is above Max number (40)
		while (userNum3 > MAX_NUMBER) {
			printf("The number entered was greater than %d" "\n", MAX_NUMBER);
			printf("Please re-enter: ");
			scanf("%d", &userNum3);
		}
		// Creates the histogram for number 3
		while (myNum3 < userNum3) {
			printf("*");
			myNum3++;
		}

		printf("\n"); //blank line
			printf("Bye...");
		printf("\n"); //blank line

	return 0;
} // end main()
