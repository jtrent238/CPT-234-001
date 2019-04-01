// Programmer:		Dylan Faulk & Trent Patterson
// Date:			3/30/2019
// Program Name:	MPH
// Chapter:			Chapter 6 - Functions   
// Description:		This code will calculate the miles per hour. This is based on dividing miles by hour.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

double GetMilesPerHour(double totalDistance, int elapsedTime); // Function Prototype

int main(void)
{
	//declare variables

	double averageSpeed = 0;
	double totalDistance = 0;
	int elapsedTime = 0;
	const int MIN_PER_HOUR = 60;

	//getting inputs
	printf("Enter the number of miles driven: ");
	scanf(" %lf", &totalDistance);

	printf("Enter the number of minutes it took to drive the %.1lf miles: ", totalDistance);
	scanf(" %d", &elapsedTime);

	printf("\n"); //Blank Line

	//calculating 

	averageSpeed = GetMilesPerHour(totalDistance, elapsedTime);

	//Prints the output of the data.
	printf("Based on a trip of %.1lf miles that took %d minutes," "\n", totalDistance, elapsedTime);
	printf("your speed was %.0lf MPH.", averageSpeed);

	printf("\n"); //Blank Line
	return 0;
} // end main()

double GetMilesPerHour(double totalDistance, int elapsedTime) {
	
	double averageSpeed = 0;
	const int MIN_PER_HOUR = 60;

	averageSpeed = (totalDistance / elapsedTime) * MIN_PER_HOUR; //Caculates the total distance

	return averageSpeed;
}