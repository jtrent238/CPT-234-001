// Programmer:		Jonathan Trent Patterson
// Date:			4/8/2019
// Program Name:	Progs 2, 3, 4
// Chapter:			Chapter 6 - Functions  
// Description:		This program displays a menu for programs 2, 3, and 4. Then runs the selected program

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

void DisplayMenu(int userChoice);
void TipTaxTotal();
void MinutesHoursDays();
void CaloriesBurned();

int main(void)
{
	// Constant and Variable Declarations

	int userChoice = 0;

	// *** Your program goes here ***
		
	// Checks to see if user entered a valid number (2, 3, 4, or -1)
		while (userChoice != -1) {
			if (userChoice < 2 || userChoice > 4) {
				DisplayMenu(userChoice);
			}
			else {
				DisplayMenu(userChoice);
			}
		}

		printf("\n"); // Blank Line

	return 0;
} // end main()

void DisplayMenu(int userChoice) {
	printf("   Progs 2, 3, 4 Menu" "\n");
	printf("------------------------" "\n");
	printf("2 - Tip, Tax, Total" "\n");
	printf("3 - Minutes, Hours, Days" "\n");
	printf("4 - Calories Burned" "\n");

	printf("\n"); // Blank Line

	printf("Enter a choice(-1 to quit) : ");
	scanf("%d", &userChoice);

	printf("\n"); // Blank Line

	// Switch to the userChoice
	switch (userChoice) {
	case 2:
		TipTaxTotal();
		printf("\n"); // Blank Line
		break;
	case 3:
		MinutesHoursDays();
		printf("\n"); // Blank Line
		break;
	case 4:
		CaloriesBurned();
		printf("\n"); // Blank Line
		break;
	default:
		break;
	}
}

void TipTaxTotal() {

	// Constant and Variable Declarations

	double billAmount = 0.0;
	double billTax = 0.0;
	double billTip = 0.0;
	double billTotal = 0.0;

	const int ONE_HUNDRED = 100;
	const int SALES_TAX = 0.09; //9% sales tax
	const int SALES_TIP = 0.15; // 15% Tip

	// *** Your program goes here ***

	//Gets the input from the user
	printf("Enter the amount of the bill: ");
	scanf("%lf", &billAmount);

	printf("\n");//blank line

	billTip = billAmount * 0.15; //Caculate the tip amount
	billTax = billAmount * 0.09; //Caculate the tax amount
	billTotal = billAmount + billTip + billTax; //Caculate the total amount

	//Prints the output
	printf("Based on a bill of $%.2lf, the calculated amounts are:" "\n", billAmount);
	printf("  Tip = $%.2lf" "\n", billTip);
	printf("  Tax = $%.2lf" "\n", billTax);
	printf("Total = $%.2lf" "\n", billTotal);

}

void MinutesHoursDays() {

	// Constant and Variable Declarations

	int numSeconds = 0;
	double numMins = 0.0;
	double numHours = 0.0;
	double numDays = 0.0;

	const int ZERO = 0;
	const int SIXTY = 60;
	const int TWENTY_FOUR = 24;

	// *** Your program goes here ***

	printf("Enter the number of seconds: ");
	scanf("%d", &numSeconds);

	printf("\n"); //blank line

	if (numSeconds <= ZERO) {
		printf("The number of seconds entered must be greater than %d.", ZERO);
	}
	else {
		numMins = numSeconds / SIXTY; //Caculate number of minutes
		numHours = (numSeconds / SIXTY) / SIXTY; //Caculate number of hours
		numDays = ((numSeconds / SIXTY) / SIXTY) / TWENTY_FOUR; //Caculate number of Days

		if (numMins > ZERO) {
			printf("The number of seconds you entered, %d, is %.2lf minutes." "\n", numSeconds, numMins);
		}
		else {/* nothing here */ }

		if (numHours > ZERO) {
			printf("The number of seconds you entered, %d, is %.2lf hours." "\n", numSeconds, numHours);
		}
		else {/* nothing here */ }

		if (numDays > ZERO) {
			printf("The number of seconds you entered, %d, is %.2lf days." "\n", numSeconds, numDays);
		}
		else {/* nothing here */ }


	}

}

void CaloriesBurned() {

	// Constant and Variable Declarations

	const double AVG_CAL = 3.90;
	const int START_MIN = 10;
	const int END_MIN = 30;
	const int LOOP_MIN = 5;

	int myMinutes = 0;
	double calBurned = 0.0;


	// *** Your program goes here ***

	//prints info about how much you burn a minute
	printf("You burn %.2lf calories every minute you run." "\n", AVG_CAL);
	printf("This shows how many calories you burn if you ran for 'x' minutes." "\n");

	printf("\n"); //blank line

	//starts creating the table
	printf("\t" "Minutes" "\t" "Calories" "\n");
	printf("\t" "-------" "\t" "--------" "\n");

	printf("Using a while loop" "\n");

	myMinutes = START_MIN; //sets my Minutes to Starting minutes

	while (myMinutes <= END_MIN) {
		calBurned = myMinutes * AVG_CAL;//caculates the amount of cals burned based on mins
		printf("\t" "%d" "\t" "%.2lf" "\n", myMinutes, calBurned); //prints the data in the table
		myMinutes += 5; //incriments myMinutes by 5
	}

	printf("\n"); //blank line

	myMinutes = START_MIN; //resets myMinutes back to starting minutes

	printf("Using a do-while loop" "\n");

	do {
		calBurned = myMinutes * AVG_CAL; //caculates the amount of cals burned based on mins
		printf("\t" "%d" "\t" "%.2lf" "\n", myMinutes, calBurned); //prints the data in the table
		myMinutes += 5;//incriments myMinutes by 5
	} while (myMinutes <= END_MIN);

	printf("\n"); //blank line

	myMinutes = START_MIN; //resets myMinutes back to starting minutes

	printf("Using a for loop" "\n");

	for (int i = 0; myMinutes <= END_MIN; i += 5) {
		calBurned = myMinutes * AVG_CAL;//caculates the amount of cals burned based on mins
		printf("\t" "%d" "\t" "%.2lf" "\n", myMinutes, calBurned); //prints the data in the table
		myMinutes += 5;//incriments myMinutes by 5
	}

}