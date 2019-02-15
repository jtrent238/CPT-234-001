
//---------------------------------------------------------------------------------------
// Programmer:		Jonathan Trent Patterson
// Date:			2/3/2019
// Program Name:	Day of the Week
// Chapter:			Chapter 3 - Decisions  
// Description:		2 complete English sentences describing what the program does,
//					algorithm used, etc.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <stdbool.h> // Needed for working with bool
#include <string.h> // Needed for working with strings

int main(void)
{
	// Constant and Variable Declarations

	bool isLeapYear;
	int numDaysMonth = 31;
	char dayOfWeek[10] = "";
	
	int userYear = 0;
	int userMonth = 0;
	int userDay = 0;
	int daysFebuary = 28;
	int myDayofWeek = 0;

	//formulaDayOfWeek = D + 2 * M + (int)(.6 * (M + 1)) + Y + (Y / 4) - (Y / 100) + (Y / 400) + 2 ;

	const int INVALID_YEAR = 1582;
	const int MIN_MONTHS = 1;
	const int MAX_MONTHS = 12;
	const int MIN_DAYS = 1;
	const int MAX_DAYS = 31;

	//Month constants
	const int MONTH_JANUARY = 1;
	const int MONTH_FEBUARY = 2;
	const int MONTH_MARCH = 3;
	const int MONTH_APRIL = 4;
	const int MONTH_MAY = 5;
	const int MONTH_JUNE = 6;
	const int MONTH_JULY = 7;
	const int MONTH_AUGEST = 8;
	const int MONTH_SEPTEMBER = 9;
	const int MONTH_OCTOBER = 10;
	const int MONTH_NOVEMBER = 11;
	const int MONTH_DECEMBER = 12;

	// *** Your program goes here ***


	enum days {
		DAYS_JANUARY = 31,
		DAYS_FEBUARY = 28,
		DAYS_FEBUARY_LEAP = 29,
		DAYS_MARCH = 31,
		DAYS_APRIL = 30,
		DAYS_MAY = 0,
		DAYS_JUNE = 0,
		DAYS_JULY = 0,
		DAYS_AUGEST = 0,
		DAYS_SEPTEMBER = 0,
		DAYS_OCTOBER = 0,
		DAYS_NOVEMBER = 0,
		DAYS_DECEMBER = 0
	};


	printf("Enter a year (after 1582): ");
	scanf("%d", &userYear);

	 if (userYear < 1582) {
		 printf("The year entered was not after %d.", INVALID_YEAR);
	 } 
	 else {
		 printf("Enter a month (%d-%d): ", MIN_MONTHS, MAX_MONTHS);
		 scanf("%d", &userMonth);
			if (userMonth < MIN_MONTHS || userMonth > MAX_MONTHS) {
				printf("The month entered was not between %d and %d inclusive.", MIN_MONTHS, MAX_MONTHS);
			} 
			else {
				printf("Enter a day (%d-%d): ", MIN_DAYS, MAX_DAYS);
				scanf("%d", &userDay);
				if (userDay < MIN_DAYS || userDay > MAX_DAYS) {
					printf("The day entered was not between %d and %d inclusive.", MIN_DAYS, MAX_DAYS);
				}
				else {
					//Determine if it is a leap year

					if (userYear % 400 == 0) {
						isLeapYear = true;
					}
					else if (userYear % 100 == 0) {
						isLeapYear = false;
					}
					else if (userYear % 4 == 0) {
						isLeapYear = true;
					}
					else {}

					if (isLeapYear == true) {
						daysFebuary = daysFebuary + 1; //if it is a leap year add 1 day to febuary
					}
					else {
						//conunie here
					}
				}
			}
	 }

	 
	 myDayofWeek = userDay + 2 * userMonth + (int)(.6 *(userMonth + 1)) + userYear + (userYear / 4) - (userYear / 100) + (userYear / 400) + 2;
	 //myDayofWeek = myDayofWeek - 2490;
	 

	 printf("The day of the week is %d.", myDayofWeek);
/*
	printf("%d", userDay + 2 * userMonth + (int)(.6 *(userMonth + 1)) + userYear + (userYear / 4) - (userYear / 100) + (userYear / 400) + 2);

	*/

	printf("\n"); //blank line 

	return 0;
} // end main()
