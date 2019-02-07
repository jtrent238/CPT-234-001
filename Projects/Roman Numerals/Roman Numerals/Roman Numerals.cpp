// Programmer:		Jonathan Trent Patterson
// Date:			2/6/2019
// Program Name:	Roman Numerals
// Chapter:			Chapter 3 - Decisions
// Description:		This program get a number between 1 and 10 from user and converts it to a roman numral.


#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <string.h> // Needed for working with strcpy

int main(void)
{
	// Constant and Variable Declarations

	const int MIN_NUM = 1;
	const int MAX_NUM = 10;
	int userNum = 0;
	char romanNum[5];

	// *** Your program goes here ***

	printf("Enter a number from %d to %d inclusive: ", MIN_NUM, MAX_NUM);
	scanf("%d", &userNum);

	//Validation
	if ((userNum >= MIN_NUM) && (userNum <= MAX_NUM)) {

		switch (userNum) {

		case 1:
			strcpy(romanNum, "I");
			break;

		case 2:
			strcpy(romanNum, "II");
			break;

		case 3:
			strcpy(romanNum, "III");
			break;

		case 4:
			strcpy(romanNum, "IV");
			break;

		case 5:
			strcpy(romanNum, "V");
			break;

		case 6:
			strcpy(romanNum, "VI");
			break;

		case 7:
			strcpy(romanNum, "VII");
			break;

		case 8:
			strcpy(romanNum, "VIII");
			break;

		case 9:
			strcpy(romanNum, "IX");
			break;

		case 10:
			strcpy(romanNum, "X");
			break;

		}

		printf("The number entered, %d, in Roman numerals is %s.", userNum, romanNum);

	}
	else {
		printf("The number entered, %d, is not in the range of %d to %d.", userNum, MIN_NUM, MAX_NUM);
	}

	printf("\n"); //blank line

	return 0;
} // end main()
