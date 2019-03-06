// Programmer:		Your Name
// Date:			Date
// Program Name:	The name of the program
// Chapter:			Chapter # - Chapter name
// Description:		2 complete English sentences describing what the program does,
//					algorithm used, etc.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <string.h> // Needed for Strings

int main(void)
{
	// Constant and Variable Declarations

	const int ARRAY_SIZE = 12;
	const int STRING_SIZE = 10;

	// Arrays to hold the names of the months and the number of days in each montc
	char monthNames[ARRAY_SIZE][STRING_SIZE] = { "January", "Febuary", "March", "April", "May", "June", "July", "Augest", "September", "October", "November", "December" };
	int numOfDays[ARRAY_SIZE] = { 31, 28, 31, 30, 31, 30, 31 ,31, 30 ,31, 30, 31 }; // Once the size of the array has been defined, it cannot be changed while the program is running
	int i = 0; // for loop counter (also used in initializing the arrays);

	// *** Your program goes here ***

	// Populate the arrays
	strcpy(monthNames[i], "January");	/*numOfDays[i] = 31;*/ i++;
	strcpy(monthNames[i], "Febuary");	/*numOfDays[i] = 28;*/ i++;
	strcpy(monthNames[i], "March");		/*numOfDays[i] = 31;*/ i++;
	strcpy(monthNames[i], "April");		/*numOfDays[i] = 30;*/ i++;
	strcpy(monthNames[i], "May");		/*numOfDays[i] = 31;*/ i++;
	strcpy(monthNames[i], "June");		/*numOfDays[i] = 30;*/ i++;
	strcpy(monthNames[i], "July");		/*numOfDays[i] = 31;*/ i++;
	strcpy(monthNames[i], "Augest");	/*numOfDays[i] = 31;*/ i++;
	strcpy(monthNames[i], "September"); /*numOfDays[i] = 30;*/ i++;
	strcpy(monthNames[i], "October");	/*numOfDays[i] = 31;*/ i++;
	strcpy(monthNames[i], "November");	/*numOfDays[i] = 30;*/ i++;
	strcpy(monthNames[i], "December");	/*numOfDays[i] = 31;*/ i++;


	// Display the beginning line
	printf("Days of each month:" "\n");
	printf("--------------------" "\n");

	// Display the months and days
	for (i = 0; i < ARRAY_SIZE; i++) {
		printf("%s has %d days." "\n", monthNames[i], numOfDays[i]);
	}

	printf("\n"); // Blank line

	return 0;
} // end main()
