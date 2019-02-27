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

	int ballHeight = 0;
	int ballVelocity = 0;
	int ballTime = 0;

	int initialHeight = 0;
	int initialVelocity = 0;

	double ballFeet = 0.0;
	double ballSeconds = 0.0;

	const int NUM_ZERO = 0;
	const int NUM_SIXTEEN = 16;

	// *** Your program goes here ***

	printf("Enter the initial height of the ball(in ft.) : ");
	scanf("%d", &initialHeight);

	while (initialHeight <= NUM_ZERO) {
		printf("The initial height must be greater than or equal to %d." "\n", NUM_ZERO);
		printf("\t" "Enter the initial height of the ball(in ft.): ");
		scanf("%d", &initialHeight);

	}

	printf("Enter the initial velocity of the ball (in ft. per sec.): ");
	scanf("%d", &initialVelocity);

	while (initialVelocity <= NUM_ZERO) {
		printf("The initial velocity must be greater than or equal to %d." "\n", NUM_ZERO);
		printf("\t" "Enter the initial velocity of the ball (in ft. per sec.): ");
		scanf("%d", &initialVelocity);
	}

	printf("The maximum height the ball will reach is %.1lf feet.", ballFeet);
	printf("The time for the ball to reach the ground is %.1lf seconds.", ballSeconds);

	printf("\n"); //blank line
	printf("\n"); //blank line

	printf("Time" "\t" "Height" "\n");


	while (ballHeight >= NUM_ZERO) {

		ballHeight = initialHeight + initialVelocity * ballSeconds - NUM_SIXTEEN * (ballSeconds * ballSeconds);

		printf("%.2lf" "\t" "%.1lf" "\n", ballSeconds, ballHeight);
		
		ballSeconds += 0.25;
	}

	// Do not touch below...

	printf("\n"); //blank line

	return 0;
} // end main()
