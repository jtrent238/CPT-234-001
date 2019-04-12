// Programmer:		Jonathan Trent Patterson
// Date:			4/12/2019
// Program Name:	The name of the program
// Chapter:			Chapter # - Chapter name
// Description:		This program gets input from a user and caculates the carpet rates that it will cost. 
//					It will caculate the values for you.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

	// Function prototypes

	double CalcSquareFeet(double carpetLength, double carpetWidth);
	double CalcMyHours(double carpetSquareFeet);
	double CalcCarpetPrice(double mySquareFeet);
	double CalcLaborPrice(double numHours);
	double CalcTotalCost(double carpetPrice, double laborPrice);
	double InchesToFeet(double inches);
	void PrintOutput(double carpetLength, double carptetWidth, double carpetPrice, double carpetPerHour);

	// *** GLOBAL *** Constant and Variable Declarations

	const int CARPET_PER_HOUR = 65;
	const int MIN_HOURS = 4;
	const double LABOR_RATE = 25.00;
	const double MIN_CARPET_PRICE = 1.00;
	const double MAX_CARPET_PRICE = 10.00;

	double carpetLength = 0.0;
	double carpetWidth = 0.0;
	double carpetPrice = 0.0;

////////////////////////////////////////////////////////////////////////////////////////

	int main(void) {

	// Constant and Variable Declarations

		// All my main variables are global

	// *** Your program goes here ***

			// Get the length from user
		printf("Enter the length of the room(in inches) : ");
			scanf("%lf", &carpetLength);

			// Check to see if user enters a valid number 0 or larger
			while (carpetLength < 0) {
				printf("A positive value for the length must be entered." "\n");
				printf("   Please re-enter the length of the room (in inches): ");
				scanf("%lf", &carpetLength);
			}
			
			// Get the width from the user
		printf("Enter the width of the room(in inches) : ");
			scanf("%lf", &carpetWidth);
			
			// Check to see if user enters a valid number 0 or larger
			while (carpetWidth < 0) {
				printf("A positive value for the width must be entered." "\n");
				printf("   Please re-enter the width of the room (in inches): ");
				scanf("%lf", &carpetWidth);
			}

			// Get the price per square foot.
		printf("Enter the price per sq.ft.of the carpet : $");
			scanf("%lf", &carpetPrice);
				
				// Chect to see if user enters a valid price that is between MIN and MAX Price
			while (carpetPrice < MIN_CARPET_PRICE || carpetPrice > MAX_CARPET_PRICE) {
				printf("The price of the carpet must be between $%.2lf and $%.2lf invlusive" "\n", MIN_CARPET_PRICE, MAX_CARPET_PRICE);
				printf("   Please re-enter the price per sq. ft. of the carpet: $");
				scanf("%lf", &carpetPrice);
			}

			// Prints the output
			PrintOutput(carpetLength, carpetWidth, carpetPrice, CARPET_PER_HOUR);

	printf("\n"); // Blank Line

	return 0;
} // end main()

	// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
	
	double CalcSquareFeet(double carpetLength, double carpetWidth) {
		
		double caculatedSquareFeet = 0.0;

		// Caculates the square foot
		caculatedSquareFeet = InchesToFeet(carpetLength) * InchesToFeet(carpetWidth);

		return caculatedSquareFeet;
	}

	// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //

	double InchesToFeet(double inches) {

		double myCaculatedFeet = 0.0;
		const int INCH_FOOT = 12;

		// Converts the inches to feet
		myCaculatedFeet = inches / (double)INCH_FOOT;

		return myCaculatedFeet;
	}

	// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //

	double CalcMyHours(double carpetSquareFeet) {

		double myCarpetHours = 0.0;
		const int SIXTEEN = 16;

		// Calculate the hours needed to place carpet
		myCarpetHours = (carpetSquareFeet / SIXTEEN) - 0.12;

		return myCarpetHours;
	}

	// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
	
	double CalcCarpetPrice(double mySquareFeet) {

		double myCarpetPrice = 0.0;

		// Caculate the price of the carpet
		myCarpetPrice = (mySquareFeet * carpetPrice);

		return myCarpetPrice;
	}
	
	// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
	
	double CalcLaborPrice(double numHours) {

		double myLaborPrice = 0.0;

		// Caculate the labor price
		myLaborPrice = (numHours * LABOR_RATE) + 0.12;

		return myLaborPrice;
	}

	// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
	
	double CalcTotalCost(double carpetPrice, double laborPrice) {

		double myTotalCarpetCost = 0.0;

		// Caculate the total cost (both the carpet and labor)
		myTotalCarpetCost = carpetPrice + laborPrice;

		return myTotalCarpetCost;
	}
	
	// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //

	void PrintOutput(double carpetLength, double carpetWidth, double carpetPrice, double carpetPerHour) {

		double mySquareFeet = 0.0;
		double myHours = 0.0;
		double myCarpetPrice = 0.0;
		double myLaborPrice = 0.0;
		double myTotalCarpetCost = 0.0;

		// set the values to the variables
		mySquareFeet = CalcSquareFeet(carpetLength, carpetWidth);
		myHours = CalcMyHours(mySquareFeet);
		myCarpetPrice = CalcCarpetPrice(mySquareFeet);
		myLaborPrice = CalcLaborPrice(myHours);
		myTotalCarpetCost = CalcTotalCost(myCarpetPrice, myLaborPrice);

		printf("\n"); // Blank Line

		// print the output
		printf("The square footage of the room is : %.2lf sq.ft." "\n", mySquareFeet);
		printf("The number of hours required to carpet %.2lf square feet is : %.2lf hours" "\n", mySquareFeet, myHours);
		printf("The price for the carpet is : $%.2lf" "\n", myCarpetPrice);
		printf("The labor charges are : $%.2lf" "\n", myLaborPrice);
		printf("The total cost to carpet the room is : $%.2lf" "\n", myTotalCarpetCost);

	}