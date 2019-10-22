// Fifty Dice Game
// Gabriel Mendez-Frances
// CS 102-02
// 10-18-2019

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll(int player);

int main(void) {
	int n;
	int player;
	int score1;
	int score2;
	int die1;
	int die2;

	char ch = '\n';

	srand((unsigned)(time(NULL)));
	printf("Welcome to Fifty! The game where you roll doubles until you reach 50!\n");
	printf("Decide whether you want to be player 1 or player 2.\n");
	system("pause");
	while (ch != 'q') {
		roll(1);
		printf("%d %d\n", die1, die2);
		scanf("%c", ch);
		roll(2);
		printf("%d %d\n", die1, die2);
		scanf("%c", ch);
	}
}

int roll(int player) {
	int die1;
	int die2;

	printf("Player %d, press enter to roll the dice.\n", player);
	die1 = (rand() % 6) + 1;
	die2 = (rand() % 6) + 1;
	return die1, die2;
}
