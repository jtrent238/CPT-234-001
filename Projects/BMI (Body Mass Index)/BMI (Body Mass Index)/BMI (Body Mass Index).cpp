// Programmer:		Kyle Gilstrap & Trent Patterson
// Date:			2/8/2019
// Program Name:	BMI (Body Mass Index)
// Chapter:			Chapter 3 - Decisions
// Description:		This program will ask the user to input their height and weight. The program will then calculate their BMI and display their BMI and if they are underweight, overweight,
//					or if they are at their optimal weight. The program will also validate the users input, checking to make sure they are within the desired values.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <math.h> // Needed for pow()

int main(void)
{
	// Variable Declarations
	int userHeight = 0;
	int userWeight = 0;
	double userBMI = 0.0;

	// Constant Declarations
	const int MIN_HEIGHT      = 1;
	const int MAX_HEIGHT      = 108;
	const int MIN_WEIGHT      = 1;
	const int MAX_WEIGHT      = 1000;
	const int BMI_MULTIPLIER  = 703;
	const int SQUARED_NUM     = 2;
	const double UNDER_WEIGHT = 18.4;
	const double OVER_WEIGHT  = 25.1;


	printf("Enter your height (in inches): "); // Get users height.
	scanf("%d", &userHeight);
	
	if ((userHeight >= MIN_HEIGHT) && (userHeight <= MAX_HEIGHT)) // Validation for userHeight.
	{
		printf("Enter your weight (in pounds): "); // Get users weight.
		scanf("%d", &userWeight);
		
		if ((userWeight >= MIN_WEIGHT) && (userWeight <= MAX_WEIGHT)) // Validation for userWeight.
		{
			userBMI = (userWeight * (double)BMI_MULTIPLIER) / (pow((double)userHeight, SQUARED_NUM)); // BMI calculation.

			printf("\n"); // Blank line.
			printf("Your Body Mass Index (BMI) is %.1lf." "\n", userBMI);

			if (userBMI <= UNDER_WEIGHT) // If underweight.
			{
				printf("You are underweight." "\n");
			}

			else if (userBMI >= OVER_WEIGHT) // If overweight.
			{
				printf("You are overweight." "\n");
			}

			else // If at optimal weight.
			{
				printf("You are at your optimal weight." "\n");
			}

		} // End if for userWeight validation.

		else // Else for userWeight validation. (If the user inputs a number outside of the MIN/MAX range)
		{
			printf("Weight must be between %d and %d." "\n", MIN_WEIGHT, MAX_WEIGHT);
		} // End else for userWeight validation.

	} // End if for userHeight validation

	else // else for userHeight validation. (If the user inputs a number outside of the MIN/MAX range)
	{
		printf("Height must be between %d and %d." "\n", MIN_HEIGHT, MAX_HEIGHT);
	} // End else for userHeight validation.

	return 0;
} // end main()
