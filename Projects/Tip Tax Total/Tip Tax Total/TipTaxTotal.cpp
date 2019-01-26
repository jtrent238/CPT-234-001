// Programmer:		Jonathan Trent Patterson
// Date:			1/26/2019
// Program Name:	Tip, Tax, Total
// Chapter:			Chapter 2 - Fundamentals  
// Description:		This programs caulates the Tip, Tax, and Total of a bill. Just enter the Bill Amount.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations

	double billAmount = 0.0;
	double billTax = 0.0;
	double billTip = 0.0;
	double billTotal = 0.0;

	const int ONE_HUNDRED = 100;
	const int SALES_TAX = 0.09; //9% sales tax
	const int SALES_TIP = 0.15; // 15% Tip

	// *** Your program goes here ***

	//Gets the input from the user
	printf("Enter the amount of the bill: ");
	scanf("%lf", &billAmount);

	printf("\n");//blank line

	billTip = billAmount * 0.15; //Caculate the tip amount
	billTax = billAmount * 0.09; //Caculate the tax amount
	billTotal = billAmount + billTip + billTax; //Caculate the total amount

	//Prints the output
	printf("Based on a bill of $%.2lf, the calculated amounts are:" "\n", billAmount);
	printf("  Tip = $%.2lf" "\n", billTip);
	printf("  Tax = $%.2lf" "\n", billTax);
	printf("Total = $%.2lf" "\n", billTotal);

	return 0;
} // end main()
