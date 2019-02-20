// Programmer:		Blake Bolin, Jonathan Trent Patterson
// Date:			2/20/2019
// Program Name:	Powers of 2
// Chapter:			Chapter # - Repetitions
// Description:		This program askes for a number between 1 and 20 in order to see how many times two is to the power too.
//					The program uses a loop to calculate powers of 2.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <math.h> // for pow
int main(void)
{
	// Constant and Variable Declarations
	const int MIN_NUM = 1;
	const int MAX_NUM = 20;
	int num1 = 0;
	int loopCounter = 0;
	int powerTwo = 1;



	// *** Your program goes here ***
	printf("Enter an integer (between %d and %d): ", MIN_NUM, MAX_NUM);
	scanf("%d", &num1);

	//determine if the number user is a valid user
	while ((num1 < MIN_NUM || num1 > MAX_NUM)) {
		printf("The integer entered, %d, is not in the range of %d to %d.\n", num1, MIN_NUM, MAX_NUM);
		printf("Please re-enter the integer: ");
		scanf("%d", &num1);
	}
	printf("\n"); // Blank line

	// prints the output
	for (loopCounter = 1; loopCounter <= num1; loopCounter++) {
		powerTwo *= 2;
		printf("2^%d = %d\n", loopCounter, powerTwo);

	}

	printf("\n"); //blank line



	return 0;
} // end main()
