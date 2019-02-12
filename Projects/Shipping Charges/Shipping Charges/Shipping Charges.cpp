// Programmer:        Jonathan Trent Patterson and Keason Brooks
// Date:              2/11/19
// Program Name:      Shipping Charges
// Chapter:           Chapter 3 - Decisions
// Description:       Ask the user for the weight of the package. 
//                    Then calculate and display the cost of shippping the package.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.

#include <stdio.h> // Needed for working with printf and scanf
#include <stdbool.h> //Needed for bool

int main(void)
{
	// Constant and Variable Declarations
	double userWeight = 0.0;
	double shippingCharge = 0.0;
	double shippingRate = 0.0;

	const double UNDER_TWO_POUNDS = 1.25;
	const double UNDER_SIX_POUNDS = 2.50;
	const double UNDER_TEN_POUNDS = 3.90;
	const double OVER_TEN_POUNDS = 4.40;

	const int ZERO_POUNDS = 0;
	const int TWO_POUNDS = 2;
	const int SIX_POUNDS = 6;
	const int TEN_POUNDS = 10;



	//Now we get the user weight
	printf("Enter the weight of the package: ");
	scanf("%lf", &userWeight);

	//We validate whether or not the package is over 0 pounds
	if (userWeight > ZERO_POUNDS) {

		//Now we decide and calculate the cost
		if (userWeight <= TWO_POUNDS) {
			shippingRate = UNDER_TWO_POUNDS;
			shippingCharge = shippingRate;
		}
		else if (userWeight <= SIX_POUNDS) {
			shippingRate = UNDER_SIX_POUNDS;
			shippingCharge = shippingRate;
		}
		else if (userWeight <= TEN_POUNDS) {
			shippingRate = UNDER_TEN_POUNDS;
			shippingCharge = shippingRate;
		}
		else if (userWeight > OVER_TEN_POUNDS) {
			shippingRate = OVER_TEN_POUNDS;
			shippingCharge = shippingRate;
		}

		//And now we output the cost for the user
		printf("\n" "The shipping charge is $%.2lf." "\n", shippingCharge);

	}

	else {

		//We inform the user that the weight is not a legitimate number
		printf("The weight of the package must be greater than %.2lf." "\n", (double)ZERO_POUNDS);
	}


	return 0;
} // end main()