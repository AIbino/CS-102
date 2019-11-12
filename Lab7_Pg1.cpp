// Lab 7 Question 1
// CS 102-02
// Gabriel Mendez-Frances
// 11-12-2019
// Read in a text string from the user and write loops to manipulate the characters in 
// the string as individual array elements. 

#include <stdio.h> 
#include <string.h> 
#include <ctype.h> 

int main(void) { 
	char words[100];
	int length;
	int i = 0;
	int o = 0;
	int blanks = 0;
	// STEP 1: Declare a string variable to hold text entered by the user 
	// make your string able to hold at least 100 characters 
	printf("Enter a sentence!\n");
	gets_s(words);
	length = strlen(words);
	for (i = 0; i < length; i++) {
		words[i] = toupper(words[i]);
	}
	while (o < length) {
		if (words[o] == ' ') {
			blanks++;
		}
		o++;
	}
	// STEP 2: Add code to prompt the user to enter a sentence. Read the entire 
	// sentence (including spaces) into your variable. 
	printf("You wrote: %s\n", words);
	// STEP 3:  Add a print statement to print this sentence to the screen. 
	printf("You sentence contained %d characters.\n", length);
	// STEP 4:  Print out the number of characters stored in the string. 
	printf("Also, your sentence contained %d spaces and/or tabs.", blanks);
	printf("\nEnd Program.\n"); 
	return 0;
}