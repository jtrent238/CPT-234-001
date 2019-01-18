// Programmer:		Jonathan Trent Patterson
// Date:			1/18/2019
// Program Name:	Profit
// Chapter:			Chapter 2 - Fundamentals
// Description:		2 complete English sentences describing what the program does,
//					algorithm used, etc.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations

	double projectedSales = 0.0;
	double profitAmount = 0.0;

	// *** Your program goes here ***
	
	// *** INPUT SECTION *** //
	printf("What is the projected amount of total sales : $");
	scanf("%lf", &projectedSales);

	// *** PROCESSING SECTION *** //
	profitAmount = projectedSales * .21;

	// *** OUTPUT SECTION *** //
	printf("The amount of profit that will be made from sales " "\n");
	printf("of $%.2lf is $%.2lf." "\n", projectedSales, profitAmount);

	return 0;
} // end main()
