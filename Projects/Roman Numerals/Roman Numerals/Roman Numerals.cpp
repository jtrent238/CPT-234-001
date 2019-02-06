// Programmer:		Your Name
// Date:			Date
// Program Name:	The name of the program
// Chapter:			Chapter # - Chapter name
// Description:		2 complete English sentences describing what the program does,
//					algorithm used, etc.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations

	const int MIN_NUM = 1;
	const int MAX_NUM = 10;
	int userNum = 0;
	char romanNum[1];

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
	}
	else {
		printf("The number entered, %d, is not in the range of %d to %d.", userNum, MIN_NUM, MAX_NUM);
	}

	return 0;
} // end main()
