// Programmer:		Jonathan Trent Patterson
// Date:			3/1/2019
// Program Name:	The Ball Program
// Chapter:			Chapter 4 - Repetition
// Description:		2 complete English sentences describing what the program does,
//					algorithm used, etc.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations

	int ballHeight = 0;
	int ballVelocity = 0;
	int ballTime = 0;

	int initialHeight = 0;
	int initialVelocity = 0;

	double ballFeet = 0.0;
	double ballSeconds = 0.0;

	double maxHeight = 0.0;
	double heightTime = 0.0;
	double currentHeight = 0.0;
	double startTime = 0.0;

	const int NUM_ZERO = 0;
	const int NUM_SIXTEEN = 16;
	const int NUM_THIRTY_TWO = 32;

	// *** Your program goes here ***


	// *** INPUT SECTION ***

	printf("Enter the initial height of the ball(in ft.) : ");
	scanf("%d", &initialHeight);

	while (initialHeight < NUM_ZERO) {
		// Error message if height is less than zero
		printf("The initial height must be greater than or equal to %d." "\n", NUM_ZERO);
		// Ask user to renter number
		printf("\t" "Enter the initial height of the ball(in ft.): ");
		scanf("%d", &initialHeight);

	}

	printf("Enter the initial velocity of the ball (in ft. per sec.): ");
	scanf("%d", &initialVelocity);

	while (initialVelocity < NUM_ZERO) {
		// Error message if velocity is less than zero
		printf("The initial velocity must be greater than or equal to %d." "\n", NUM_ZERO);
		// Ask user to renter number
		printf("\t" "Enter the initial velocity of the ball (in ft. per sec.): ");
		scanf("%d", &initialVelocity);
	}

	// *** PROCESSING SECTION ***

	// calculate time
	heightTime = initialVelocity / NUM_THIRTY_TWO;

	// caculate max height
	maxHeight = initialHeight + (initialVelocity * heightTime) - (16 * heightTime * heightTime);

	if (initialHeight > NUM_ZERO || initialVelocity > NUM_ZERO) {
		while (currentHeight > NUM_ZERO) {
			ballTime += 0.1;
			currentHeight = initialHeight + (initialVelocity * ballTime) - (NUM_SIXTEEN * ballTime * ballTime);
		}
	}
	
	printf("The maximum height the ball will reach is %.1lf feet.", ballFeet);
	printf("The time for the ball to reach the ground is %.1lf seconds.", ballSeconds);

	printf("\n"); //blank line
	printf("\n"); //blank line

	printf("Time" "\t" "Height" "\n");

	// Increment Start time
	startTime += 0.25;

	while (currentHeight > NUM_ZERO) {
		printf("%.2lf" "\t" "%.1lf" "\n", startTime, currentHeight);
		startTime += 0.25;
		currentHeight = initialHeight + (initialVelocity * startTime) - (NUM_SIXTEEN * startTime * startTime);
	}

	printf("%.2lf" "\t" "%.1lf" "\n", ballTime, NUM_ZERO);

	if (currentHeight == 0 && initialVelocity == 0) {
		printf("The maximum height the ball will reach is %.1lf feet.\n", maxHeight);
		printf("The time for the ball to reach the ground is %.1lf seconds.\n", ballTime);
		printf("\n"); //blank line
		printf("Time" "\t" "Height" "\n");
		printf("%.2lf" "\t" "%.1lf" "\n", ballTime , NUM_ZERO);
	}

	// Do not touch below...

	printf("\n"); //blank line

	return 0;
} // end main()
