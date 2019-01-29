// Programmer:		Jonathan Trent Patterson
// Date:			1/29/2019
// Program Name:	How Many
// Chapter:			Chapter 2 - Fundamentals  
// Description:		This program ask the user how much money they have.
//					Then tells them what they can buy.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations

	double amountMoney = 0.0;

	const double HOTDOG_PRICE = 1.50;
	const double HAMBURGER_PRICE = 3.00;
	const double CHICKENSANDWICH_PRICE = 2.75;

	int numHotDogs = 0;
	int numHamburgers = 0;
	int numChickenSandwiches = 0;

	// *** Your program goes here ***

	// prints the menu
	printf("        Fast Food" "\n");
	printf("-------------------------" "\n");
	printf("Hot Dog w/ Chili....$%.2lf" "\n", HOTDOG_PRICE);
	printf("Hamburger...........$%.2lf" "\n", HAMBURGER_PRICE);
	printf("Chicken Sandwich....$%.2lf" "\n", CHICKENSANDWICH_PRICE);

	printf("" "\n"); //blank line

	//ask the user how much money they have
	printf("How much money do you have? $", amountMoney);
	scanf("%lf", &amountMoney);


	printf("" "\n"); //blank line

	//caculates how much of x you can buy
	numHotDogs = amountMoney / HOTDOG_PRICE; // caculate how many hot dogs you can buy
	numHamburgers = amountMoney / HAMBURGER_PRICE; // caculate how many Hamburgers you can buy
	numChickenSandwiches = amountMoney / CHICKENSANDWICH_PRICE; // caculate how many chicken sandwiches you can buy

	//prints the output of what they can buy
	printf("With $%.2lf, you could buy" "\n", amountMoney);
	printf("  %d Hot Dogs w/ chili, or" "\n", numHotDogs);
	printf("  %d Hamburgers, or" "\n", numHamburgers);
	printf("  %d Chicken Sandwiches" "\n", numChickenSandwiches);


	return 0;
} // end main()

