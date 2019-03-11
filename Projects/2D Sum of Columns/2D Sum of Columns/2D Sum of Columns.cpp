// Programmer:		Jonathan Trent Patterson
// Date:			3/10/2019
// Program Name:	2D Sum of Columns
// Chapter:			Chapter 5 - Arrays
// Description:		This program creates an array from 1 to 100 and displays it in a table.
//					Then prints the sum of 2 colums.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations

	// Constants
	const int MIN_NUM = 1;
	const int MAX_NUM = 100;
	const int MAX_ROW = 10;
	const int MAX_COL = 10;

	// Array
	int myAwesomeArray[MAX_ROW][MAX_COL];

	int myNum = 0;

	int sum_col4 = 0;
	int sum_col9 = 0;


	// *** Your program goes here ***

	printf("The contents of a 2-dimensional array, populated with the values %d to %d..." "\n", MIN_NUM, MAX_NUM);

	myNum = MIN_NUM; // Set myNum to MIN_NUM

	// Populate and print the array
	for (int row = 1; row <= MAX_ROW; row++) {
		for (int col = 1; col <= MAX_COL; col++) {
			//printf("TEST" "\t");
			myAwesomeArray[row][col] = myNum; // Populates the array
			printf("%d" "\t", myAwesomeArray[row][col]); // Prints the array
			myNum++;
		}
		printf("\n"); // drops down 1 row
	}

	printf("\n"); // Blank Line

	// Sets the sum of colum 4 to a temp value
	for (int i = 0; i < 10; i++) {
		int tempVal[10+1];
		tempVal[i] = myAwesomeArray[4][i];
		sum_col4 += tempVal[i];
	}

	// Sets the sum of comumn 9 to a temp value
	for (int i = 0; i < 10; i++) {
		int tempVal[10+1];
		tempVal[i] = myAwesomeArray[9][i];
		sum_col9 += tempVal[i];
	}

	printf("The sum of the 4th column is %d." "\n", sum_col4);
	printf("The sum of the 9th column is %d.", sum_col9);

	printf("\n"); // Blank line

	return 0;
}