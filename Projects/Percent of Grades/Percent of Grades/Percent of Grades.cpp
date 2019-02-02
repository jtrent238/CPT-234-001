// Programmer:		Jonathan Trent Patterson
// Date:			1/24/2019
// Program Name:	Percent of Grades
// Chapter:			Chapter 2 - Fundamentals
// Description:		This program caculates the percent of students who made grade x and dropped the class.
//                  Then displays percenage of students who pass or failed.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main()
{

	// Constant and Variable Declarations
	//Store values of students
	double numGradeA = 0.0;
	double numGradeB = 0.0;
	double numGradeC = 0.0;
	double numGradeD = 0.0;
	double numGradeF = 0.0;
	double numWithdraw = 0.0;
	double numAbs = 0.0;
	double numDropped = 0.0;

	//Store values of registered students
	double totalRegistered = 0;
	double totalLeft = 0;
	double totalRegisteredEnd = 0;

	//Store percent of students
	double percentDrop = 0.0;
	double percentWithdraw = 0.0;
	double percentA = 0.0;
	double percentB = 0.0;
	double percentC = 0.0;
	double percentD = 0.0;
	double percentF = 0.0;
	double percentFFA = 0.0;

	const int ONE_HUNDRED = 100;

	// *** Your program goes here ***

//prints the user prompts
	printf("Enter the number of students who earned a grade of 'A': ");
	scanf("%lf", &numGradeA);
	printf("Enter the number of students who earned a grade of 'B': ");
	scanf("%lf", &numGradeB);
	printf("Enter the number of students who earned a grade of 'C': ");
	scanf("%lf", &numGradeC);
	printf("Enter the number of students who earned a grade of 'D': ");
	scanf("%lf", &numGradeD);
	printf("Enter the number of students who earned a grade of 'F': ");
	scanf("%lf", &numGradeF);
	printf("Enter the number of students who were withdrawn: ");
	scanf("%lf", &numWithdraw);
	printf("Enter the number of students who failed due to excessive absences: ");
	scanf("%lf", &numAbs);
	printf("Enter the number of students who were dropped: ");
	scanf("%lf", &numDropped);

	printf("\n"); //blank line

	//Caculate registered students
	totalRegistered = numGradeA + numGradeB + numGradeC + numGradeD + numGradeF + numWithdraw + numAbs + numDropped; //Caculate total registered Students
	totalLeft = numDropped + numWithdraw;
	totalRegisteredEnd = totalRegistered - totalLeft; //Caculate total registered Students at the end.

	printf("The total number of students who registered was: %.0lf" "\n", totalRegistered);
	printf("The total number of students on the roll at the end was: %.0lf" "\n", totalRegisteredEnd);

	//Caculate percentage of students
	percentDrop = numDropped / totalRegistered * ONE_HUNDRED;
	percentWithdraw = numWithdraw / totalRegistered * ONE_HUNDRED;
	percentA = numGradeA / totalRegistered * ONE_HUNDRED;
	percentB = numGradeB / totalRegistered * ONE_HUNDRED;
	percentC = numGradeC / totalRegistered * ONE_HUNDRED;
	percentD = numGradeD / totalRegistered * ONE_HUNDRED;
	percentF = numGradeF / totalRegistered * ONE_HUNDRED;
	percentFFA = numAbs / totalRegistered * ONE_HUNDRED;
	// MY PROBLEM WAS HERE >>>> percentFFA = ***(numGradeF + numAbs)*** / totalRegistered * ONE_HUNDRED;

	//printf("\n" "---TESTING INFO----" "\n" "Total Percent %.0f%% / 100%" "\n" "---TESTING INFO----" "\n", percentDrop + percentWithdraw + percentA + percentB + percentC + percentD + percentF + percentFFA); //This is to check if i did the percent caculation right

	printf("\n"); //blank line

	//prints the output
	printf("The percentage of students who registered and were dropped was  %.1f%%" "\n", percentDrop);
	printf("The percentage of students who earned an 'A' was: %.1f%%" "\n", percentA);
	printf("The percentage of students who did not earn at least a 'C' was  %.1f%%" "\n", percentC);
	printf("The percentage of students who earned an 'F' or 'FA' was:  %.1f%%" "\n", percentF);
	printf("The percentage of students who earned at least a 'B' was:  %.1f%%" "\n", percentB);

	return 0;
} // end main()


