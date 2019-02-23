// Programmer:		Ben Sciarra & Keason Brooks & Trent Patterson & Justin Ellison



#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	double userNum = 0.0;
	const double weekSal = 200.00;
	const double saleCom = 0.09;

	// This is how much the user gets paid.
	double userPay = 0.0;

	// *** Input ***

	// The user enters their sales amount.
	// The user can enter a negative number to end the program.
	printf("Enter the amount of sales (negative to quit): $");
	scanf("%lf", &userNum);

	while (userNum >= 0) {

			// This is the calculation to get the sales.
			userPay = userNum * saleCom + weekSal;

			printf("\nThe person receives $%.2lf.\n\n", userPay);
		
			printf("Enter the amount of sales (negative to quit): $");
			scanf("%lf", &userNum);


	}
	printf("\n"); //New line

	return 0;
} // end main()
