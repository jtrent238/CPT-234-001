// Programmer:		Your Name
// Date:			Date
// Program Name:	The name of the program
// Chapter:			Chapter # - Chapter name
// Description:		2 complete English sentences describing what the program does,
//					algorithm used, etc.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

// Function prototype
double CaculateRetail(double wholesaleCost, double markupPerctage);

int main(void)
{
	// Constant and Variable Declarations

	double wholesaleCost = 0.0;
	double markupPercentage = 0.0;
	double retailPrice = 0.0;


	// *** Your program goes here ***

	// ** INPUT **
	printf("Enter the wholesale cost of an item: $");
		scanf("%lf", &wholesaleCost);
	printf("Enter the percent markup for the item: ");
		scanf("%lf", &markupPercentage);
		printf("\n"); // Blank Line
	// ** PROCESSING **
		retailPrice = CaculateRetail(wholesaleCost, markupPercentage);
		//retailPrice = wholesaleCost * (1 + markupPercentage / 100);

	// Caculate the retail price of an item based on its wholesale cost and the markup
		//markupDecimal - markupPercentage / 100;		// convert markup to decimal
		//markAmount = marupDecimal * wholesaleCost;	// calculate the profit
		//retailPrice = wholesaleCost + markupAmount; // retail equals wholesale + profit

	// ** OUTPUT **
	printf("The retail price of an item that has a wholesale cost of $%.2lf" "\n", wholesaleCost);
	printf("and the markup of %.2lf%% is $%.2lf" "\n", markupPercentage, retailPrice);

	printf("\n"); // Blank Line
	return 0;
} // end main()


double CaculateRetail(double wholesaleCost, double markupPerctage) {

	double retailPrice = 0;

	retailPrice = wholesaleCost * (1 + markupPerctage / 100);

	return retailPrice;	
}