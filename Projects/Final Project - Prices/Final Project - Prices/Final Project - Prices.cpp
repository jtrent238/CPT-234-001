// Programmer:		Jonathan Trent Patterson
// Date:			4/26/2019
// Program Name:	Final Project - Prices
// Chapter:			Final Project
// Description:		This program gets gas prices and calcuate average. 
//					It then caculates weather the prices are rising or falling.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <string.h>
#include <ctype.h>

// Function Prototypes
double CalcAverageGasPrices(double a, double b, double c, double d);
bool IsRising(double a, double b);

const int GLOBAL_NUM_GAS_PRICES = 4;

double global_gasStationPrice[GLOBAL_NUM_GAS_PRICES];

int main(void)
{
	// Constant and Variable Declarations

	const int NUM_GAS_PRICES = 4;
	const int GAS_NAME_LENGTH = 30;

	const double MIN_PRICE = 0.01;
	const double MAX_PRICE = 5.00;

	char gasStationName[GAS_NAME_LENGTH + 1];

	double gasStationPrice[NUM_GAS_PRICES + 1];

	int replaceIndex;

	// *** Your program goes here ***

	// Get the input from the user
	printf("Enter the gas stations name: ");
	fgets(gasStationName, GAS_NAME_LENGTH, stdin);

	int lastIndex;
	int lastChar;
	lastIndex = strlen(gasStationName);
	lastChar = gasStationName[lastIndex];
	if ((lastChar == '\n')) {
		// User's caption lacked ending punctuation, so add a period
		strcat(gasStationName, "");
	}
	for (int i = 1; i < NUM_GAS_PRICES + 1; i++) {
			printf("Enter %s's gas price #%d: $", gasStationName, i);
			scanf("%lf", &gasStationPrice[i]);
			if (gasStationPrice[i] < MIN_PRICE || gasStationPrice[i] > MAX_PRICE) {
				printf("  The price was not in the range of $%.2lf - $%.2lf." "\n", MIN_PRICE, MAX_PRICE);
				printf("  Please re-enter the gas price #%d: $", i);
				scanf("%lf", &gasStationPrice[i]);
			}
			printf("\n");

	}

	// Puts the gas prices into the global array to be accessed by other functions
	for (int i = 0; i < NUM_GAS_PRICES + 1; i++) {
		global_gasStationPrice[i] = gasStationPrice[i];
	}

	printf("%s had an average gas price of $%.2lf" "\n", gasStationName, CalcAverageGasPrices(gasStationPrice[1], gasStationPrice[2], gasStationPrice[3], gasStationPrice[4]));

	if (IsRising(CalcAverageGasPrices(gasStationPrice[1], gasStationPrice[2], gasStationPrice[3], gasStationPrice[4]), gasStationPrice[1]) == true) {
		printf("The price of gas at %s is rising." "\n", gasStationName);
	}

	if (IsRising(CalcAverageGasPrices(gasStationPrice[1], gasStationPrice[2], gasStationPrice[3], gasStationPrice[4]), gasStationPrice[1]) == false) {
		printf("The price of gas at %s is falling." "\n", gasStationName);
	}

	printf("\n"); // Blank Line
	return 0;
} // end main()

double CalcAverageGasPrices(double a, double b, double c, double d) {

	double averagePrice = 0.0;

	// Caculate the average price of the gas prices
	averagePrice = (a + b + c + d) / 4;

	return averagePrice;
}

bool IsRising(double a, double b) {

	//double a = global_gasStationPrice[1];
	//double b = global_gasStationPrice[2];
	//double c = global_gasStationPrice[3];
	//double d = global_gasStationPrice[4];

	bool priceIsRising;

	// Determines if the gas prices are rising or falling.

	if (a > b) {
		priceIsRising = true;
	}
	else {
		priceIsRising = false;
	}

	/*if (a > b) {
		if (b > c) {
			if (c > d) {
				isRising = false;
			}
		}
	}

	if (a < b) {
		if (b < c) {
			if (c < d) {
				isRising = true;
			}
		}
	}*/

	return priceIsRising;
}