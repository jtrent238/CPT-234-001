// Programmer:		Your Name
// Date:			Date
// Program Name:	The name of the program
// Chapter:			Chapter # - Chapter name
// Description:		2 complete English sentences describing what the program does,
//					algorithm used, etc.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

// Function Prototypes
int GetInt(const char PROMPT_TEXT[]);
int CalcFatCals(int fatGrams);
int CalcCarbCals(int carbsGrams);
int CalcProteinCals(int proteinGrams);
void MyCalOutput(const char TYPE_NAME, int typeGrams, int typeCals);
void MyFinalOutput(int totalCals);

int main(void)
{
	// Constant and Variable Declarations

	// Constant Strings
	const char FAT_PROMPT[] = "Enter the number of fat grams in your meal : ";
	const char CAR_PROMPT[] = "Enter the number of carbohydrate grams in your meal : ";
	const char PROTEIN_PROMPT[] = "Enter the number of protein grams in your meal : ";
	const char FAT_WORD[] = "fat";
	const char CARB_WORD[] = "carbohydrate";
	const char PROTEIN_WORD[] = "protein";

	// Input Variables
	int fatGrams = 0;
	int carbGrams = 0;
	int proteinGrams = 0;
	int consumedCalories = 0;

	// Caculated Variables
	int fatCals = 0;
	int carbCals = 0;
	int proteinCals = 0;

	// *** Your program goes here ***

	// *** INPUT ***

	// Get the number of fat grams
	fatGrams = GetInt(FAT_PROMPT);

	// Get the nuber of carbohydrate grams
	carbGrams = GetInt(CAR_PROMPT);

	// Get the number of protein grams
	proteinGrams = GetInt(PROTEIN_PROMPT);

	// *** PROCESSING ***
	fatGrams = CalcFatCals(fatGrams);
	carbCals = CalcCarbCals(carbGrams);
	proteinCals = CalcProteinCals(proteinGrams);

	// *** OUTPUT ***
	MyCalOutput(FAT_WORD, fatGrams, fatCals);
	MyCalOutput(CARB_WORD, carbGrams, fatCals);
	MyCalOutput(PROTEIN_WORD, proteinGrams, fatCals);

	//printf("The number of calories from the %d fat gram consumed is 9 calories." "\n", fatGrams);
	//printf("The number of calories from the %d carbohydrate gram consumed is 4 calories." "\n", carbohydrateGrams);
	//printf("The number of calories from the %d protein gram consumed is 4 calories." "\n", proteinGrams);
	//printf("The total number of calories consumed is %d calories." "\n", consumedCalories);

	printf("\n"); // Blank Line
	return 0;
} // end main()

// *** Functions ***
// Get an Integer
int GetInt(const char PROMPT_TEXT[]) {
	// Get (and return) an integer based on the prompt passed

	// Variable Declaration
	int enteredInt = 0;
	printf("%s", PROMPT_TEXT);
	scanf("%d", &enteredInt);

	return enteredInt;
} // end GetInt function

	// Fat Calories Caculation
	// Value-returning functions should not get input
	// (data needed should not be passed to the function)
	// and should not display output
	// (the answer should be returned to the program that invoked the function)

	// Fat Calories Calculation
int CalcFatCals(int fatGrams) {
	// Caculate (and return the number of fat calories based on the fat grams passed

	// Variable Declaration
	const int FAT_CALS = 9;

	return fatGrams * FAT_CALS;
} // end CalcFatCals function

	// Carbohydrate Calories Calculation
int CalcCarbsCals(int carbsGrams) {
	// Caculate (and return the number of fat calories based on the fat grams passed

	// Variable Declaration
	const int CARBS_CALS = 4;

	return carbsGrams * CARBS_CALS;
} // end CalcCarbCals function

	// Protein Calories Calculation
int CalcProteinCals(int proteinGrams) {
	// Caculate (and return the number of fat calories based on the fat grams passed

	// Variable Declaration
	const int PROTEIN_CALS = 4;

	return proteinGrams * PROTEIN_CALS;
} // end CalcProteinCals function

	// Calorie Output
void MyCalOutput(const char TYPE_NAME, int typeGrams, int typeCals) {
	// Display the number of calories (and additional text)
	// in so many grams of the type passed

	printf("The number of calories from the %d %s gram", typeGrams, TYPE_NAME);
	if (typeGrams != 1) printf("s"); // Singular/Plural decison
	printf(" consummed is %d calories." "\n", typeCals);

	return; // void functions return nothing - return is not even needed
} // end MyCalcOutput function

void MyFinalOutput(int totalCals) {
	// Dispaly the total number of calories (and additiona text)

	printf("The total number of calories consumed is %d calories." "\n", totalCals);

	return; // void functions return nothing - return is not even needed
} // end MyFinalOutput function
