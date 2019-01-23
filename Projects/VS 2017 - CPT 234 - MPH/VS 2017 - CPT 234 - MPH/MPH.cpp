/******************************************************************************

							Online C Compiler.
				Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Programmer:		Dylan Faulk & Trent Patterson
// Date:			1/23/19
// Program Name:	MPH
// Chapter:			Chapter 2 - Fundamentals   
// Description:		This code will calculate the miles per hour. This is based on dividing miles by hour.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	//declare variables

	double averageSpeed = 0;
	double totalDistance = 0;
	int elapsedTime = 0;
	const int minPerHour = 60;

	//getting inputs
	printf("Enter the number of miles driven: ");
	scanf(" %lf", &totalDistance);

	printf("Enter the number of minutes it took to drive the %.1lf miles: ", totalDistance);
	scanf(" %d", &elapsedTime);

	printf("\n"); //Blank Line

	//calculating 

	averageSpeed = (totalDistance / elapsedTime) * minPerHour; //Caculates the total distance

	//Prints the output of the data.
	printf("Based on a trip of %.1lf miles that took %d minutes," "\n", totalDistance, elapsedTime);
	printf("your speed was %.0lf MPH.", averageSpeed);

	return 0;
} // end main()

