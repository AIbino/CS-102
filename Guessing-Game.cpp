// Guessing Game
// Gabriel Mendez-Frances
// CS 105-02
// 10-8-2019

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int n;
	time_t t;
	char ch = '\n';
	int guess;

	srand((unsigned)(time(&t)));
	n = (rand() % 6) + 1;
	printf("Welcome to the Guessing game.\n");
	while (ch != 'q') {
		printf("Choose a number: ");
		scanf("%d", &guess);
		if (guess > n) {
			printf("You guess is too high!\n");
		}
		else if (guess < n) {
			printf("Your guess is too low!\n");
		}
		else {
			printf("You got it!\n");
			break;
		}
		scanf("%c", &ch);
	}
}
