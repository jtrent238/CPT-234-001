// Programmer:		Jonathan Trent Patterson
// Date:			2/5/2019
// Program Name:	Minutes, Hours, Days  
// Chapter:			Chapter 3 - Decisions  
// Description:		Takes the number of seconds entered by the user and deterimes other times.
//					Seconds to Minutes, Seconds to Hours, Seconds to Days.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations

	int numSeconds = 0;
	double numMins = 0.0;
	double numHours = 0.0;
	double numDays = 0.0;

	const int ZERO = 0;
	const int SIXTY = 60;
	const int TWENTY_FOUR = 24;

	// *** Your program goes here ***

	printf("Enter the number of seconds: ");
	scanf("%d", &numSeconds);

	printf("\n"); //blank line

	if (numSeconds <= ZERO) {
		printf("The number of seconds entered must be greater than %d.", ZERO);
	}
	else {
		numMins = numSeconds / SIXTY; //Caculate number of minutes
		numHours = (numSeconds / SIXTY) / SIXTY; //Caculate number of hours
		numDays = ((numSeconds / SIXTY) / SIXTY) / TWENTY_FOUR; //Caculate number of Days

		if (numMins > ZERO) {
			printf("The number of seconds you entered, %d, is %.2lf minutes." "\n", numSeconds, numMins);
		}
		else {/* nothing here */ }

		if (numHours > ZERO) {
			printf("The number of seconds you entered, %d, is %.2lf hours." "\n", numSeconds, numHours);
		}
		else {/* nothing here */ }

		if (numDays > ZERO) {
			printf("The number of seconds you entered, %d, is %.2lf days." "\n", numSeconds, numDays);
		}
		else {/* nothing here */ }


	}


	return 0;
} // end main()


