// Programmer:		Kyle Gilstrap, cody, Trent Patterson, Allayah Simmons, Cody Sutherland
// Date:			03/11/2019
// Program Name:	2D Rainfall
// Chapter:			Chapter 5 - Arrays
// Description:		This program will take the rainfall from Jan-Dec during the years 2010-2014. The program will output a table with the year, month, and rainfall. The program will then output a total
//					amount of rainfall for each year, then it will output the average rainfall for each month. There is no user input.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	const int NUM_YEARS  = 5; // Number of years.
	const int NUM_MONTHS = 12; // Number of months in a year.
	double rainFall[NUM_YEARS][NUM_MONTHS] = { {0.88, 1.11, 2.01, 3.64, 6.44, 5.58, 4.23, 4.34, 4.00, 2.05, 1.48, 0.77},
											{0.76, 0.94, 2.09, 3.29, 4.68, 3.52, 3.52, 4.82, 3.72, 2.21, 1.24, 0.80},
											{0.67, 0.80, 1.75, 2.70, 4.01, 3.88, 3.72, 3.78, 3.55, 1.88, 1.21, 0.61},
											{0.82, 0.80, 1.99, 3.05, 4.19, 4.44, 3.98, 4.57, 3.43, 2.32, 1.61, 0.75},
											{0.72, 0.90, 1.71, 2.02, 2.33, 2.98, 2.65, 2.99, 2.55, 1.99, 1.05, 0.92} }; // Initializing the array.
	int numYear            = 2010; // The beginning year.
	double totalRainfall   = 0.0; // The variable to store the total rainfall.
	double averageRainfall = 0.0; // The variable to store the average rainfall.
	double monthTotalRainfall = 0.0; // The variable to store the total rainfall for the month.
	int r = 0; // Row
	int c = 0; // Col
	
	



	// *** Your program goes here ***
	// Table
	printf("       Jan   Feb   Mar   Apr   May   Jun   Jul   Aug   Sep   Oct   Nov   Dec\n"); // Prints the month abbreviations
	for (r = 0; r < NUM_YEARS; ++r)
	{
		printf("%d  ", numYear); // Prints the year starting with 2010.
		numYear++; // Adds one to the year.
		for (c = 0; c < NUM_MONTHS; ++c)
		{
			printf("%.2lf  ", rainFall[r][c]); // Prints out the table.
		}
		printf("\n"); // Blank line
	} // End table
	printf("\n"); // Blank line
	// Sum of rainfall for each year.
	printf("Total rainfall for each year:\n");
	numYear = 2010; // Sets the numYear variable back to 2010.
	for (r = 0; r < NUM_YEARS; ++r)
	{
		printf("%d  ", numYear); // Prints the year starting with 2010.
		numYear++; // Adds one to the year.
		totalRainfall = 0.0; // Resets totalRainfall back to 0.0.
		for (c = 0; c < NUM_MONTHS; ++c)
		{
			totalRainfall += rainFall[r][c];
		}
		printf("%.2lf\n", totalRainfall); // Prints the total rainfall.
	} // End sum of rainfall.

	// Average rainfall for each month.
	printf("\n"); // Blank line
	printf("\n"); // Blank line
	printf("Average rainfall for each month:\n");
	printf(" Jan   Feb   Mar   Apr   May   Jun   Jul   Aug   Sep   Oct   Nov   Dec\n");
	for (c = 0; c < NUM_MONTHS; ++c)
	{
		averageRainfall = 0.0;
		monthTotalRainfall = 0.0;
		for (r = 0; r < NUM_YEARS; ++r)
		{
			monthTotalRainfall += rainFall[r][c]; // Adds the total rainfall for that month. ( 0 = Jan, 1 = Feb, ..., 11 = Dec)
		}
		averageRainfall = monthTotalRainfall / NUM_YEARS; // Average rainfall is month total divided by how many years.
		printf("%.2lf  ", averageRainfall); // Prints the average rainfall for the month.
	} // End average rainfall
	printf("\n"); // Blank line

	printf("\n"); // Blank line.
	return 0;
} // end main()
