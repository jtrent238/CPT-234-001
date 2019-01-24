// Programmer:		Jonathan Trent Patterson
// Date:			1/24/2019
// Program Name:	Percent of Grades
// Chapter:			Chapter 2 - Fundamentals
// Description:		This program caculates the percent of students who made grade x and dropped the class.

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
	double percentF = 0.0;
	double percentFFA = 0.0;

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
	totalLeft = numDropped + numAbs + numWithdraw;
	totalRegisteredEnd = totalRegistered - totalLeft; //Caculate total registered Students at the end.

	printf("The total number of students who registered was: %.0lf" "\n", totalRegistered);
	printf("The total number of students on the roll at the end was: %.0lf" "\n", totalRegisteredEnd);

	//Caculate percentage of students
	percentDrop = (float)numDropped / totalRegistered * 100;
	percentWithdraw = (float)numWithdraw / totalRegistered * 100;
	percentA = (float)numGradeA / totalRegistered * 100;
	percentB = (float)numGradeB / totalRegistered * 100;
	percentC = (float)numGradeC / totalRegistered * 100;
	percentF = (float)numGradeF / totalRegistered * 100;
	percentFFA = ((float)numGradeF + (float)numAbs) / totalRegistered * 100;

	//printf("\n" "---TESTING INFO----" "\n" "Total Percent %.0f%% / 100%" "\n" "---TESTING INFO----" "\n", (float)percentDrop + (float)percentWithdraw + (float)percentA + (float)percentB + (float)percentC + (float)percentF + (float)percentFFA); //This is to check if i did the percent caculation right

	printf("\n"); //blank line

	//prints the output
	printf("The percentage of students who registered and were dropped was  %.2f%%" "\n", percentDrop);
	printf("The percentage of students who earned an 'A' was: %.2f%%" "\n", percentA);
	printf("The percentage of students who did not earn at least a 'C' was  %.2f%%" "\n", percentC);
	printf("The percentage of students who earned an 'F' or 'FA' was:  %.2f%%" "\n", percentF);
	printf("The percentage of students who earned at least a 'B' was:  %.2f%%" "\n", percentB);

	return 0;
} // end main()

