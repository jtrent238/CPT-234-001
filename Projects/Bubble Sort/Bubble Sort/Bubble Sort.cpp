// Programmer:		Jonathan Trent Patterson
// Date:			3/13/2019
// Program Name:	Bubble Sort
// Chapter:			Chapter 5 - Arrays
// Description:		This program gets input from user and adds it to an array then sorts it using the bubble sort method.
//					I used 3 arrays, it could have been done with just 1.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations

	const int ARRAY_AMOUNT = 10;
	const int SIZE = ARRAY_AMOUNT; // Sets SIZE = ARRAY_AMOUNT, I did this because I already had ARRAY_AMOUNT when pasting SIZE in.

	double myAwesomeArray[ARRAY_AMOUNT];
	double myAwesomeArray_UnSorted[ARRAY_AMOUNT];
	double myAwesomeArray_Sorted[ARRAY_AMOUNT];

	int tempvar = 0;

	// *** Your program goes here ***

	// Get the input from the user.
	for (int i = 0; i < ARRAY_AMOUNT; i++) {
		printf("Enter a value for array Element [%d]: ", i);
		scanf("%lf", &myAwesomeArray[i]);
		printf("\n");
	}
	
	// Populate the Unstored array from user input
	printf("The un-sorted array:" "\n");
	for (int i = 0; i < ARRAY_AMOUNT; i++) {
		myAwesomeArray_UnSorted[i] = myAwesomeArray[i];
		myAwesomeArray_Sorted[i] = myAwesomeArray[i];
		printf("%.2lf", myAwesomeArray_UnSorted[i]);
		printf("\n"); // Blank Line
	}

	// The outer loop controls the number of passes Declarations
	// The number of passes will be 1 less than the number of elements
	for (int i = 0; i < SIZE - 1; i++)
	{
		// The inner loop controls the number of comparisons
		// For each pass, the number of comparisons will be 1 less than the previous pass
			for (int j = 0; j < SIZE - (i + 1); j++)
			{
				// If 2 adjacent elements are out of order
				if (myAwesomeArray_Sorted[j] > myAwesomeArray_Sorted[j + 1]) // '<' for descending order
				{   // Swap the elements
					// (a temp variable is needed for the swap)
					tempvar = myAwesomeArray_Sorted[j];
					myAwesomeArray_Sorted[j] = myAwesomeArray_Sorted[j + 1];
					myAwesomeArray_Sorted[j + 1] = tempvar;
				} // end if
			} // end inner for
	} // end outer for


	printf("\n"); // Blank Line

	// Print the sorted array
	printf("The sorted array:" "\n");
	for (int i = 0; i < ARRAY_AMOUNT; i++) {
		printf("%.2lf", myAwesomeArray_Sorted[i]); // Print the lines
		printf("\n"); // Blank Line
	}

	printf("\n"); // Blank Line

	return 0;
} // end main()
