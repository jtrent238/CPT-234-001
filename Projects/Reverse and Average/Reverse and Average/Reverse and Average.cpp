// Programmer:		Jonathan Trent Patterson
// Date:			3/4/2019
// Program Name:	Reverse and Average
// Chapter:			Chapter 5 - Arrays
// Description:		Get a list of numbers from user and puts it into array. Reverses it and then finds the average of it.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations

	//max array sizes
	const int ARRAY_SIZE_0 = 10;
	const int ARRAY_SIZE_1 = 10;
	const int ARRAY_SIZE_2 = 10;

	// my arrays
	double userArray0[ARRAY_SIZE_0];
	double userArray1[ARRAY_SIZE_1];
	double userArray2[ARRAY_SIZE_2];

	// *** Your program goes here ***

	// populate array 1
	for (int i = 0; i < ARRAY_SIZE_0; i++) {
		printf("Enter array element #%d: ", i);
		scanf("%lf", &userArray0[i]);
	}

	printf("\n"); //blank line

	// Print the original array
	printf("The original array..." "\n");
	printf("%.0lf" "\t" "%.0lf" "\t" "%.0lf" "\t" "%.0lf" "\t" "%.0lf" "\t" "%.0lf" "\t" "%.0lf" "\t" "%.0lf" "\t" "%.0lf" "\t" "%.0lf" "\n", userArray0[0], userArray0[1], userArray0[2], userArray0[3], userArray0[4], userArray0[5], userArray0[6], userArray0[7], userArray0[8], userArray0[9]);

	// reverse array 1 into array 2
	userArray1[0] = userArray0[9];
	userArray1[1] = userArray0[8];
	userArray1[2] = userArray0[7];
	userArray1[3] = userArray0[6];
	userArray1[4] = userArray0[5];
	userArray1[5] = userArray0[4];
	userArray1[6] = userArray0[3];
	userArray1[7] = userArray0[2];
	userArray1[8] = userArray0[1];
	userArray1[9] = userArray0[0];

	// print array 2
	printf("The reverse array..." "\n");
	printf("%.0lf" "\t" "%.0lf" "\t" "%.0lf" "\t" "%.0lf" "\t" "%.0lf" "\t" "%.0lf" "\t" "%.0lf" "\t" "%.0lf" "\t" "%.0lf" "\t" "%.0lf" "\n", userArray1[0], userArray1[1], userArray1[2], userArray1[3], userArray1[4], userArray1[5], userArray1[6], userArray1[7], userArray1[8], userArray1[9]);

	// get the average of array 1 and array 2
	userArray2[0] = (userArray0[0] + userArray1[0]) / 2;
	userArray2[1] = (userArray0[1] + userArray1[1]) / 2;
	userArray2[2] = (userArray0[2] + userArray1[2]) / 2;
	userArray2[3] = (userArray0[3] + userArray1[3]) / 2;
	userArray2[4] = (userArray0[4] + userArray1[4]) / 2;
	userArray2[5] = (userArray0[5] + userArray1[5]) / 2;
	userArray2[6] = (userArray0[6] + userArray1[6]) / 2;
	userArray2[7] = (userArray0[7] + userArray1[7]) / 2;
	userArray2[8] = (userArray0[8] + userArray1[8]) / 2;
	userArray2[9] = (userArray0[9] + userArray1[9]) / 2;

	// print array average
	printf("The average array..." "\n");
	printf("%.1lf" "\t" "%.1lf" "\t" "%.1lf" "\t" "%.1lf" "\t" "%.1lf" "\t" "%.1lf" "\t" "%.1lf" "\t" "%.1lf" "\t" "%.1lf" "\t" "%.1lf" "\n", userArray2[0], userArray2[1], userArray2[2], userArray2[3], userArray2[4], userArray2[5], userArray2[6], userArray2[7], userArray2[8], userArray2[9]);

	printf("\n"); // blank line

	return 0;
} // end main()
