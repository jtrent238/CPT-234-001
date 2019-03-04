// Programmer:		Your Name
// Date:			Date
// Program Name:	The name of the program
// Chapter:			Chapter # - Chapter name
// Description:		2 complete English sentences describing what the program does,
//					algorithm used, etc.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <string.h> // Needed for strings

int main(void)
{
	// Constant and Variable Declarations

	const int ARRAY_SIZE = 10;
	const int NAME_SIZE = 30;

	double userVals[ARRAY_SIZE]; // Once the size of the array has been defined, it cannot be changed while the program is running.
	
	char fullName[NAME_SIZE];

	double largestVal = 0.0;
	double smallestVal = 0.0;

	// *** Your program goes here ***

	// Get the full name (using fgets() )
	printf("Enter your full name (first and last names on one line): ");
	fgets(fullName, NAME_SIZE, stdin);

	// Strip the ending <Enter> off the string (if there is one)
	if (fullName[strlen(fullName) - 1] == '\n') fullName[strlen(fullName) - 1] = '\0';

	// Populate the array
	for (int i = 0; i < ARRAY_SIZE; i++) {
		printf("Enter a value for array element #%d: ", i);
			scanf("%lf", &userVals[i]);
	}

	largestVal = userVals[0];
	smallestVal = userVals[0];

	for (int i = 0; i < ARRAY_SIZE; i++) {
		if (userVals[i] > largestVal) {
			largestVal = userVals[i];
		}
		if (userVals[i] < smallestVal) {
			smallestVal = userVals[i];
		}
	}

	printf("Your name is: %s" "\n", fullName);
	printf("The largest value is %lf." "\n", largestVal);
	printf("The smallest value is %lf." "\n", smallestVal);

	printf("\n"); // Blank Line

	return 0;
} // end main()
