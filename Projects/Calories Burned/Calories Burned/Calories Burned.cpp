// Programmer:		Jonathan Trent Patterson
// Date:			2/23/2019
// Program Name:	Calories Burned
// Chapter:			Chapter 4 - Repetition
// Description:		This program prints a table based on the amount of minutes as cals burned.
//					It uses a while, do while, and a for loop.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
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

	return 0;
} // end main()
