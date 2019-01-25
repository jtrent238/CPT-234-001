// Programmer:		Jonathan Trent Patterson
// Date:			Date
// Program Name:	The name of the program
// Chapter:			Chapter # - Chapter name
// Description:		2 complete English sentences describing what the program does,
//					algorithm used, etc.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <stdlib.h> // Needed for abs()
#include <math.h> // Needed for pow()
int main(void)
{
	// Constant and Variable Declarations

	int num1 = 0;
	int num2 = 0;
	int absDiff = 0;
	int myPower = 0;
	const int ONE_HUNDRED = 100;

	// *** Your program goes here ***

	printf("Enter an integer between 1 and 10: ");
		scanf("%d", &num1);
	printf("Enter another integer between 1 and 10: ");
		scanf("%d", &num2);

	absDiff = abs(num1 - num2);
	myPower = pow(2, num1);
	
	printf("\n");

	printf("The sum of %d and %d is %d." "\n", num1, num2, num1 + num2);
	printf("The absolute difference between %d and %d is %d." "\n", num1, num2, absDiff);
	printf("The product of %d and %d is %d." "\n", num1, num2, num1 * num2);
	printf("The quotient of %d divided by %d is %.2lf." "\n", ONE_HUNDRED, num1, (double)ONE_HUNDRED / num1);
	printf("The remainder of %d divided by %d, is %d." "\n", ONE_HUNDRED, num2, ONE_HUNDRED % num2);
	printf("2 raised to the power of %d is: %d" "\n", num1, myPower);
	
	printf("\n");

	return 0;
} // end main()
