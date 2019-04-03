// Programmer:      Jonathan Trent Patterson
// Date:            4/3/2019
// Program Name:    MyToUpper
// Chapter:         Chapter 6 - Function
// Description:     This program will convert strings to characters. The string will then output the characters as all uppercase letters.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <string.h> // Needed for working with strings
#include <ctype.h> // Needed for working with upper


char* MyToUpper(char myString[]);  // Prototype

int main(void)
{

	// Constant and Variable Declarations
	const int MAX_ARRAY_SIZE = 20;  // The array is no more than 20 spaces.

	char myString[MAX_ARRAY_SIZE];     // The string is assigned to the value of the array.
	char myNewString[MAX_ARRAY_SIZE];

	// *** Your program goes here ***

	printf("Enter a string: ");     // The user is asked to enter a string. 
	//scanf("%s", myString);
	fgets(myString, MAX_ARRAY_SIZE, stdin);

	printf("\n"); // Blank Line

	printf("The string you entered was: %s", myString);   // The program outputs the string.
	//MyToUpper(myString);

	printf("The string converted to uppercase is: %s", MyToUpper(myString));  // The output shows the string in uppercase. 

	printf("\n");


	return 0;
} // end main()

char* MyToUpper(char myString[])        // This is the function that converts the string.
{
	for (int i = 0; myString[i] != '\0'; ++i) {
		myString[i] = toupper(myString[i]);
	}

	return myString;
}