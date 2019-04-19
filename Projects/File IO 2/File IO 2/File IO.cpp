// Programmer:		Your Name
// Date:			Date
// Program Name:	The name of the program
// Chapter:			Chapter # - Chapter name
// Description:		2 complete English sentences describing what the program does,
//					algorithm used, etc.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <stdlib.h>

int main(void)
{
	// Constant and Variable Declarations

	FILE* myFile = NULL;
	
	char fileName[20];

	int userNum = 0; // the integer entered by the user
	int numValues = 0; //the total number of values read from the file
	int numRead = 0; // how many values were read with each fscanf() statement
	int* myArray = (int*)malloc(numValues * sizeof(int)); // A dynamic array to hold values read

	// *** Your program goes here ***

	printf("Enter the name of the file you'd like to create: ");
		scanf("%s", fileName);

	printf("\n"); // Blank Line

	// Connect to the file for writing
	printf("Opening %s for writing..." "\n", fileName);
	myFile = fopen(fileName, "w");

	if (myFile != NULL) {

		// Prompt for the value to write to the file
		printf("Enter a positive integer value (enter a negative value to quit): ");
			scanf("%d", &userNum);

			while (userNum >= 0) {
				fprintf(myFile, "%d" "\n", userNum);
				
				printf("The value of %d was written to %s." "\n", userNum, fileName);
				printf("\n"); // Blank Line

				printf("Enter a another positive integer value (enter a negative value to quit): ");
					scanf("%d", &userNum);
			}

			printf("Closing %s..." "\n", fileName);
			fclose(myFile);
			printf("%s was written successfully!" "\n" "\n" "\n", fileName);

	} else {
		printf("Could not open %s for writing." "\n", fileName);
	}

	myFile = NULL;

	printf("Opening %s for reading..." "\n", fileName);
	myFile = fopen(fileName, "r");

	if (myFile != NULL) {

		while (!feof(myFile)) {
			numRead = fscanf(myFile, "%d", &userNum);

			if (numRead == 1) {
				printf("The value read was %d." "\n", userNum);
				numValues++;
				myArray = (int*)realloc(myArray, numValues * sizeof(int));
				myArray[numValues - 1] = userNum; // -1 is used because the array is zero-based
			}
		}

		printf("Closing the file..." "\n");
		fclose(myFile);
		printf("%s was read successfully!" "\n", fileName);

		printf("\n"); // Blank Line

		printf("%d values were read and stored in an array." "\n", numValues);

		// Display the contents of the array
		printf("The values in the array are: " "\n");
		for (int i = 0; i < numValues; i++) {
			printf("Value #%d == %d" "\n", i + 1, myArray[i]);
		}
	} else {
		printf("Could not open %s for reading." "\n", fileName);
	}

	return 0;
} // end main()
