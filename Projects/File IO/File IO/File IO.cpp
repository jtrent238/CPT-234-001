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

	//double num = 1.234;
	int num = 5;
	char name[20];
	int myNum = 0;

	// Step #1 - Creat a file pointer variable
	FILE* myFile = NULL;
	FILE* readFile = NULL;

	// *** Your program goes here ***

	//printf("%+06.2lf", num); // +01.23

	// Step #2 - Connect to the file
	printf("Connecting to the file" "\n");
	myFile = fopen("test.txt", "w");

	// Step #3 - Write to the file
	printf("Writing to the file..." "\n");
	fprintf(myFile, "Trent" "\n");
	fprintf(myFile, "%d", num);
	fprintf(stdout, "The end" "\n");

	// Step #4 - Close the file
	printf("Closing the file" "\n");
	fclose(myFile);

	// Connect
	readFile = fopen("test.txt", "r");
	if (readFile == NULL) {
		printf("ERROR" "\n");
	}
	else {

	}
	// Read
	printf("Reading the file..." "\n");
	
	while (!feof(readFile)) {
		fscanf(readFile, "%s" "\n", name);
		printf("%s" "\n", name);
	}

	//fscanf(readFile, "%s", name);
	//fscanf(readFile, "%d", &myNum);

	// Close
	fclose(readFile);

	//printf("The 1st piece of data read was %s" "\n", name);
	//printf("The 2nd piece of data read was %d" "\n", myNum);
	printf("\n"); // Blank Line

	return 0;
} // end main()
