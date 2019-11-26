// Lab 9 
// CS102 
// Gabriel Mendez-Frances
// Read a single line from a data file on disk 
// Each line in the file has a first name and a last name 

#include <stdio.h> 
int main(void) {
	FILE *inFile;
	const int LEN = 21;
	char lastName[LEN];
	char firstName[LEN];
	char newFile[50];
	int ln = 1;
	int i;

	printf("Please input a file name including the full path.\n");
	scanf("%s", newFile);
	// opens the file "input.txt" on disk
	// Part I: 
	// STEP 1: Add code to read in the first name and the last name from the 
	// first line of data in the data file.
	if ((inFile = fopen(newFile, "r")) == NULL) {
		printf("Error opening file!\n");
		return 1;
	}
	else {
		while (!feof(inFile)) {
			fscanf(inFile, "%s %s", firstName, lastName);
			// STEP 2:  Add a print statement to print this first name/last name to the screen
			printf("Line %d: %s %s.\n", ln, firstName, lastName);
			ln++;
		}
		printf("\n%d lines were read in the file.", ln - 1);
	}
	fclose(inFile); // close the file when done with it 
	printf("\nEnd Program.\n");
	return 0;
}