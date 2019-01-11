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

	char myName[20];

	// *** Your program goes here ***

	printf("Hello Trent! \n");

	printf("Enter your name: \n");
	scanf("%s", myName); //Gets input from user
	printf("You entered %s. \n", myName);

	printf("\n"); //Blank line

	return 0;
} // end main()
