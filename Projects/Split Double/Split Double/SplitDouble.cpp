// Programmer:		Jonathan Trent Patterson & Brian Lorick
// Date:			1/28/2019
// Program Name:	Split Double
// Chapter:			Chapter 2 - Fundamentals  
// Description:		This Program gets the users inputs decimal and splits it. 
//                  The program outputs the number on the right and left of the decimal.


#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations

	double decimalNum = 0.0;
	int myNum = 0;
	double decimalNum2 = 0.0;

	// *** Your program goes here ***

	// *** INPUT ***

	printf("Enter a number that includes a decimal point: ");  // User enters a number with a decimal
	scanf("%lf", &decimalNum);


	// *** PROCESS ***

	myNum = ((float)decimalNum); // Float decimalNum
	decimalNum2 = decimalNum - myNum;
	printf("\n");//blank line


	// *** OUTPUT ***

	printf("The integer part of %lf is %d." "\n", decimalNum, myNum);  // Program outputs integer part
	printf("The decimal part of %lf is %lf." "\n", decimalNum, decimalNum2);  // Program outputs decimal part

	printf("\n");//blank line
	

	return 0;

} // end main()


