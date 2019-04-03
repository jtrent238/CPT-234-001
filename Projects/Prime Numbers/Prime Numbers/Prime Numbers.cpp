// Programmer:		Jonathan Trent Patterson
// Date:			4/3/2019
// Program Name:	Prime Numbers
// Chapter:			Chapter 6 - Functions
// Description:		This program will display prime numbers. The stopping point is a user entered number.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

bool IsPrime(int i);

int main(void)
{
	// Constant and Variable Declarations
	int userNum = 0;          // This is the number entered by the user.
	const int MIN_PRIME = 2;  // This is the minimum prime number.

	// *** Input ***
	printf("To see all the prime numbers up to 'X',\n");     // The user is asked to enter a number.
	printf("enter 'X' (an integer greater than 2): ");
	scanf("%d", &userNum);

	while (userNum <= 2)   // This while loop makes sure the number is greater than two. 
	{
		printf("   The number entered, %d, is not greater than 2.\n", userNum);
		printf("   Please re-enter an integer greater than 2: ");                // If the number is not greater than two, the user is asked to enter a number again.
		scanf("%d", &userNum);
	}

	printf("\n"); // Blank Line
	
	for (int i = MIN_PRIME; i <= userNum; i++) {       // This for loop goes through all of the prime numbers up to the number that the user entered.
		if (IsPrime(i)) {
			printf("%d is a prime number." "\n", i);
		}
	}

	printf("\n"); // Blank Line

	return 0;
} // end main()

bool IsPrime(int i) {           // This is the function to check if the number is prime.

	int myNum = 0;
	int c = 0;

	bool myBool = true;

	for (c = 2; c <= i - 1; c++)    
	{
		if (i % c == 0)
			myBool = false;
	}

	return myBool;
} // end IsPrime()