// Fifty Dice Game
// Gabriel Mendez-Frances
// CS 102-02
// 10-18-2019

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int n;
	time_t t;
	int player;
	int score;
	int die1;
	int die2;
	char ch = '\n';

	srand((unsigned)(time(&t)));
	
	printf("Welcome to Fifty! The game where you roll doubles until you reach 50!\n");
	while (ch != 'q') {
		printf("");
		die1 = (rand() % 6) + 1;
		die2 = (rand() % 6) + 1;
		printf("%d %d", die1, die2);
		scanf("%c", &ch);
	}
}
