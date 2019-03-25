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

	const double MIN_GRADE = 0.0;
	const double MAX_GRADE = 110.0;

	const double MIN_AVG = 0.0;
	const double MAX_AVG = 100.0;

	const int STU_START = 1;
	const int NUM_STUDENTS = 10;


	int stuNum = 0;
	double stuGrade[NUM_STUDENTS + 1];
	double classAvg = 0.0;
	double curveScore = 0.0;
	double stuGradeNew[NUM_STUDENTS + 1];
	double classTotal = 0.0;

		// *** Your program goes here ***

		for (int stuNum = STU_START; stuNum < NUM_STUDENTS + 1; stuNum++) {
			printf("Enter the score for student #%d: ", stuNum);
			scanf("%lf", &stuGrade[stuNum]);
			if (stuGrade[stuNum] < MIN_GRADE || stuGrade[stuNum] > MAX_GRADE) {
				printf("   The score entered was not in the range of %.1lf to %.1lf." "\n", MIN_GRADE, MAX_GRADE);
				printf("   Enter the score for student #%d: ", stuNum);
				scanf("%lf", &stuGrade[stuNum]);
			}
		}

	for (int stuNum = STU_START; stuNum < NUM_STUDENTS + 1; stuNum++) {
		classTotal += stuGrade[stuNum];
	}

	classAvg = classTotal / NUM_STUDENTS;
	curveScore = 75 - classAvg;

	printf("\n"); // Blank Line

	printf("The average of the scores was: %.1lf" "\n", classAvg);
	printf("Each student will have %.1lf added to their score." "\n", curveScore);

	printf("\n"); // Blank Line

	if (classAvg > MIN_AVG || classAvg < MAX_AVG) {

	}

	printf("The new scores are:" "\n");

	for (int stuNum = STU_START; stuNum < NUM_STUDENTS + 1; stuNum++) {
		stuGradeNew[stuNum] = stuGrade[stuNum] + curveScore;
		printf("The score for student #%d is: %.1lf" "\n", stuNum, stuGradeNew[stuNum]);
	}

	printf("\n"); // Blank Line
	return 0;
} // end main()
