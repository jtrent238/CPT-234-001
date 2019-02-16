
//---------------------------------------------------------------------------------------
// Programmer:		Jonathan Trent Patterson
// Date:			2/3/2019
// Program Name:	Day of the Week
// Chapter:			Chapter 3 - Decisions  
// Description:		This program gets input from user and outputs day of the week.
//					It takes into consideration of leap years.

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

	int weekday = (userDay += userMonth < 3 ? userYear-- : userYear - 2, 23 * userMonth / 9 + userDay + 4 + userYear / 4 - userYear / 100 + userYear / 400) % 7;
	// *** Your program goes here ***


	enum daysMonth {
		DAYS_JANUARY = 31,
		DAYS_FEBUARY = 28,
		DAYS_FEBUARY_LEAP = 29,
		DAYS_MARCH = 31,
		DAYS_APRIL = 30,
		DAYS_MAY = 31,
		DAYS_JUNE = 30,
		DAYS_JULY = 31,
		DAYS_AUGEST = 31,
		DAYS_SEPTEMBER = 30,
		DAYS_OCTOBER = 31,
		DAYS_NOVEMBER = 30,
		DAYS_DECEMBER = 31
	};
	
	enum daysWeek {
		DAY_SUNDAY = 0,
		DAY_MONDAY = 1,
		DAY_TUESDAY = 2,
		DAY_WEDNESDAY = 3,
		DAY_THURSDAY = 4,
		DAY_FRIDAY = 5,
		DAY_SATURDAY = 6
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
	 
	 weekday = (int)weekday;
	 myDayofWeek = (myDayofWeek % 7);
	 //printf("The day of the week is %d.", myDayofWeek);
	 //printf("\n");
	 //printf("The day of the week is %d.", weekday);

	 printf("");
	 
	 //Determine if it is a leap year

	 if ((userYear % 400) == 0) {
		 isLeapYear = true;
	 }
	 if ((userYear % 100) == 0) {
		 isLeapYear = false;
	 }
	 if ((userYear % 4) == 0) {
		 isLeapYear = true;
	 }
	 

	 if (isLeapYear == true) {
		 myDayofWeek = myDayofWeek + 1; // If its a leap year add only 1 day
	 }
	 else {
		 myDayofWeek = myDayofWeek + 2; // If its not a leap year add 2 days (not sure why this)
	 }

	 printf("\n"); //blank line

	 switch (myDayofWeek)
	 {
	 case 0:
		 printf("The day of the week was %s.", "Sunday" /*DAY_SUNDAY*/);
		 break;
	 case 1:
		 printf("The day of the week was %s.", "Monday" /*DAY_MONDAY*/);
		 break;
	 case 2:
		 printf("The day of the week was %s.", "Tuesday" /*DAY_TUESDAY*/);
		 break;
	 case 3:
		 printf("The day of the week was %s.", "Wednesday" /*DAY_WEDNESDAY*/);
		 break;
	 case 4:
		 printf("The day of the week was %s.", "Thursday" /*DAY_THURSDAY*/);
		 break;
	 case 5:
		 printf("The day of the week was %s.", "Friday" /*DAY_FRIDAY*/);
		 break;
	 case 6:
		 printf("The day of the week was %s.", "Saturday" /*DAY_SATURDAY*/);
		 break;

	 default:
		 printf("Invalid : Something is wrong here!");
		 break;
	 }
/*
	printf("%d", userDay + 2 * userMonth + (int)(.6 *(userMonth + 1)) + userYear + (userYear / 4) - (userYear / 100) + (userYear / 400) + 2);

	*/

	printf("\n"); //blank line 

	return 0;
} // end main()
