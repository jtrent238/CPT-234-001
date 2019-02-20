// Programmer:		Your Name
// Date:			Date
// Program Name:	The name of the program
// Chapter:			Chapter # - Chapter name
// Description:		2 complete English sentences describing what the program does,
//					algorithm used, etc.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <math.h> // Needed for pow
int main(void)
{
	// Constant and Variable Declarations

	const int MIN_NUMBER = 1;
	const int MAX_NUMBER = 20;

	int userNum = 0;
	int powNum = 0;
	

	// *** Your program goes here ***

	printf("Enter an integer (between %d and %d): ", MIN_NUMBER, MAX_NUMBER);
		scanf("%d", &userNum);

		while (powNum <= userNum) {
			printf("%d^%d = %d" "\n", 2, powNum, pow(powNum, userNum));
			powNum++;
	}
		while (userNum < MIN_NUMBER || userNum > MAX_NUMBER) {
			printf("The integer entered, %d, is not in the range of %d to %d.", userNum, MIN_NUMBER, MAX_NUMBER);
			
			printf("Please re-enter the integer: ");
			scanf("%d", &userNum);

			while (powNum <= userNum) {
				printf("%d^%d = %d", 2, powNum, pow(powNum, userNum));
				powNum++;
			}
		}

		printf("\n"); //blank line

	return 0;
} // end main()
