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

	// Constants
	int START_TEMP = 0;
	int ENDING_TEMP = 20;
	const int FREEZING_POINT = 32;
	const int NUM_5 = 5;
	const int NUM_9 = 9;

	// Variable Declarations
	int centigradeTemp = START_TEMP; // Initiatize the loop variable
	double fahrenheitTemp = 0.0;


	// *** Your program goes here ***

	// *** INPUT ***
	// There is no input for this program

	printf("Enter a starting temperature: ");
		scanf("%d", &START_TEMP);
	printf("Enter a ending temperature: ");
		scanf("%d", &ENDING_TEMP);

	centigradeTemp = START_TEMP;
	
	printf("\n"); //blank line
	
	// Display the header
	printf("Centigrade" "\t" "Fahrenheit" "\n");

	while (centigradeTemp <= ENDING_TEMP)
	{
		// *** PROCESSING ***
		// Caculate the Fahrenheit temperture
		fahrenheitTemp = ((double)NUM_9 / NUM_5 * centigradeTemp + FREEZING_POINT);
		
		// ** OUTPUT ***
		// Display the table
		printf("%d" "\t" "\t" "%.1lf" "\n", centigradeTemp, fahrenheitTemp);
		
		// Increment the Centigrade temperature
		centigradeTemp++;
	}
	
	printf("\n"); //blank line

	return 0;
} // end main()
