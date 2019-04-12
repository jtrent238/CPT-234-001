// Programmer:		Your Name
// Date:			Date
// Program Name:	The name of the program
// Chapter:			Chapter # - Chapter name
// Description:		2 complete English sentences describing what the program does,
//					algorithm used, etc.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

	// Function prototypes

	double CalcSquareFeet(double carpetLength, double carpetWidth);
	void PrintOutput(double carpetLength, double carptetWidth, double carpetPrice);

	// *** GLOBAL *** Constant and Variable Declarations

	const int CARPET_PER_HOUR = 65;
	const int MIN_HOURS = 4;
	const double LABOR_RATE = 25.00;
	const double MIN_CARPET_PRICE = 1.00;
	const double MAX_CARPET_PRICE = 10.00;

////////////////////////////////////////////////////////////////////////////////////////

	int main(void) {
	// Constant and Variable Declarations

		double carpetLength = 0.0;
		double carpetWidth = 0.0;
		double carpetPrice = 0.0;

	// *** Your program goes here ***

		printf("Enter the length of the room(in inches) : ");
			scanf("%lf", carpetLength);
		printf("Enter the width of the room(in inches) : ");
			scanf("%lf", carpetWidth);
		printf("Enter the price per sq.ft.of the carpet : ");			scanf("%lf", carpetPrice);


			PrintOutput(carpetLength, carpetWidth, carpetPrice);

	printf("\n"); // Blank Line

	return 0;
} // end main()

	// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
	
	double CalcSquareFeet(double carpetLength, double carpetWidth) {
		
		double caculatedSquareFeet = 0.0;

		caculatedSquareFeet = carpetLength * carpetWidth;

		return caculatedSquareFeet;
	}

	// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //

	void PrintOutput(double carpetLength, double carpetWidth, double carpetPrice) {

		printf("The square footage of the room is : %.2lf sq.ft." "\n", CalcSquareFeet(carpetLength, carpetWidth));
		printf("The number of hours required to carpet %.2lf square feet is : %.2lf hours" "\n");
		printf("The price for the carpet is : $%.2lf" "\n");
		printf("The labor charges are : $%.2lf" "\n");
		printf("The total cost to carpet the room is : $%.2lf" "\n");

	}