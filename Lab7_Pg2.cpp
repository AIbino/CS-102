#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char arr1[100];
	char arr2[100];
	int i = 0;
	int j = 0;
	int length = 0;
	printf("Type a sentence. I'll revserse it free of charge.\n");
	gets_s(arr1);
	length = strlen(arr1);
	printf("You typed in: %s\n", arr1);
	// PART I - printf("After reversal: %s\n", strrev(arr));
	printf("After reversal:");
	for (i = length; i >= 0; i--) {
		arr2[j] = arr1[i];
		printf("%c", arr2[j]);
		j++;
	}
	printf("\n");
	// Had some issues printing this a string, 
	// May have to do with the null character.
	// Will upload to GH and try to fix later.
	// printf("%s", arr2);
	return 0;
}