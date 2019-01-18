// Programmer:		Jonathan Trent Patterson
// Date:			1/18/2019
// Program Name:	Stock Price
// Chapter:			Chapter 2 - Fundamentals  
// Description:		This program calculates the purchace price of shares of stock. It caculates the amount of money needed to buy x number of shares.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations

	int stockShares = 0;
	double stockPrice = 0.0;
	double stockTotal = 0.0;

	// *** Your program goes here ***

	// *** INPUT SECTION *** //
	printf("Enter the number of shares of stock: ");
	scanf("%d", &stockShares);

	printf("Enter the dollar amount per share: $");
	scanf("%lf", &stockPrice);

	// *** PROCESSING SECTION *** //
	stockTotal = stockShares * stockPrice;

	// *** OUTPUT SECTION *** //
	printf("The amount of money needed to purchase %d shares of stock" "\n", stockShares);
	printf("at $%.2lf is $%.2lf." "\n", stockPrice, stockTotal);

	return 0;
} // end main()
