// Programmer:		Keason Brooks, Trent Patterson, Ben Sciarra, and Matthew Peterson
// Date:			3/8/29
// Program Name:	Rainfall Stats
// Chapter:			Chapter 5 - Arrays  
// Description:		This program asks the user for the rainfall through out the year.
//					Then the program will display to the user multiple calculations and statistics of there data.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <string.h>


int main(void)
{
	// Constant and Variable Declarations
	const int MONTH_YEAR = 12;
	double userArray[MONTH_YEAR];
	char monthArray[MONTH_YEAR][4];

	//Here we populate the month array with the names of the months
	strcpy(monthArray[0], "Jan");
	strcpy(monthArray[1], "Feb");
	strcpy(monthArray[2], "Mar");
	strcpy(monthArray[3], "Apr");
	strcpy(monthArray[4], "May");
	strcpy(monthArray[5], "Jun");
	strcpy(monthArray[6], "Jul");
	strcpy(monthArray[7], "Aug");
	strcpy(monthArray[8], "Sep");
	strcpy(monthArray[9], "Oct");
	strcpy(monthArray[10], "Nov");
	strcpy(monthArray[11], "Dec");

	//Here we initialize some variable for our calculations
	double userSum = 0.0;
	double rainAverage = 0.0;
	int rainLow = 0;
	int rainMax = 0;
	double rainLowVal = 0.0;
	double rainMaxVal = 0.0;
	int i;

	//This is where we get the user input and populate the user array
	for (int i = 0; i < MONTH_YEAR; i++) {
		printf("Enter the rainfall (in inches) for %s: ", monthArray[i]);
		scanf("%lf", &userArray[i]);
	}

	//New line
	printf("\n");

	printf("The rainfall that was entered was:\n");

	//Now we display to the user the month and rainfall they entered
	for (i = 0; i < MONTH_YEAR /2; i++) {
		printf("%s	", monthArray[i]);



	}

	//New line
	printf("\n");
	for (i = 0; i < MONTH_YEAR /2; i++) {
		printf("%.1lf	", userArray[i]);




	}

	//2 new lines
	printf("\n\n");
	for (i = MONTH_YEAR /2; i < MONTH_YEAR; i++) {
		printf("%s	", monthArray[i]);




	}

	//New line
	printf("\n");
	for (i = MONTH_YEAR /2; i < MONTH_YEAR; i++) {
		printf("%.1lf	", userArray[i]);



	}

	//Now we calculate the sum of the rainfall
	for (i = 0; i < MONTH_YEAR; i++) {
		userSum += userArray[i];




	}
	//Now we output the sum
	printf("\n\nThe total rain that fell was %.1lf inches.\n", userSum);

	//Here we calculate the average
	rainAverage = userSum / MONTH_YEAR;

	//And here we display it
	printf("The average monthly rainfall was %.1lf inches.\n", rainAverage);
	rainLowVal = userArray[0];
	rainMaxVal = userArray[0];

	//This is where we calculate the lowest rainfall entered by the user
	for (i = 0; i < MONTH_YEAR; i++) {
		if (userArray[i] < rainLowVal) {
			rainLowVal = userArray[i];
			rainLow = i;


		}

	}

	//We output our results
	printf("The lowest monthly rainfall was %.1lf inches in %s.\n", userArray[rainLow], monthArray[rainLow]);

	//And this is where we calculate the highest rainfall entered by the user
	for (i = 0; i < MONTH_YEAR; i++) {
		if (userArray[i] > rainMaxVal) {
			rainMaxVal = userArray[i];
			rainMax = i;


		}
	}

	//We output our results
	printf("The highest monthly rainfall was %.1lf inches in %s.\n\n", userArray[rainMax], monthArray[rainMax]);






	


	return 0;
} // end main()
