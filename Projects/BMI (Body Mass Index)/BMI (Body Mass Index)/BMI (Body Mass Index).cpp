// Programmer:		Kyle Gilstrap & Trent Patterson
// Date:			2/8/2019
// Program Name:	BMI (Body Mass Index)
// Chapter:			Chapter 3 - Decisions
// Description:		****-/*-**-
//					

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <math.h> // Needed for pow()

int main(void)
{
	// Constant and Variable Declarations
	const int MIN_HEIGHT = 1;
	const int MAX_HEIGHT = 108;
	const int MIN_WEIGHT = 1;
	const int MAX_WEIGHT = 1000;
	const double UNDER_WEIGHT = 18.5;
	const double OVER_WEIGHT = 25.1;
	int userHeight = 0;
	int userWeight = 0;
	double yourBMI = 0.0;


	// *** Your program goes here ***

	// ***INPUT***

	// Get user height.
	printf("Enter your height (in inches): ");
	scanf("%d", &userHeight);

	// Get user weight.
	printf("Enter your weight (in pounds): ");
	scanf("%d", &userWeight);

	printf("\n"); // New line

				  // ***PROCESSING AND OUTPUT***
				  // Calculate BMI
	yourBMI = (userWeight * 703) / (pow(userHeight, 2));

	if (((userHeight >= MIN_HEIGHT) && (userHeight <= MAX_HEIGHT)) && ((userWeight >= MIN_WEIGHT) && (userWeight <= MAX_WEIGHT))) {

		printf("Your Body Mass Index (BMI) is %.1lf.", yourBMI);

		if (yourBMI <= UNDER_WEIGHT) {
			printf("\n" "You are underweight." "\n");
		}
		if (yourBMI >= OVER_WEIGHT) {
			printf("\n" "You are overweight." "\n");
		}
		else {
			printf("\n" "Your at optimal weight." "\n");
		}

	}
	else {
		if (((userHeight >= MIN_HEIGHT) && (userHeight <= MAX_HEIGHT))) {
			printf("Height must be between %d and %d" "\n", MIN_HEIGHT, MAX_HEIGHT);
		}
		if (((userWeight >= MIN_WEIGHT) && (userWeight <= MAX_WEIGHT))) {
			printf("Weight must be between %d and %d" "\n", MIN_WEIGHT, MAX_WEIGHT);
		}
	}

	printf("\n"); // New line

	return 0;
} // end main()
