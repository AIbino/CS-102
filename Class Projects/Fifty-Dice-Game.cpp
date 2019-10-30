// Fifty Dice Game
// Gabriel Mendez-Frances
// CS 102-02
// 10-23-2019
// This program allows two users to play a game where they
// roll a pair of simulated dice to reach 50 points.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll(int scoreMod); // roll function prototype

int main(void) {
	int score1 = 0; 
	int score2 = 0;
	int die1 = 0; 
	int die2 = 0; 
	char ch = '\n'; 
	srand((unsigned)(time(NULL))); // sets the seed for the rand function

	printf("Welcome to Fifty! The game where you roll doubles until you reach 50!\n");
	printf("Decide whether you want to be player 1 or player 2.\n");
	printf("Press 'q' after rolls to quit.\n\n");

	while (ch != 'q' || ch != 'Q') { // program runs as long as user does not enter q or Q at end of the program
		printf("Player 1, press enter to roll the dice.");
		scanf("%c", &ch); // the only control needed for the game is the enter key
		score1 = roll(score1); // calls roll function and returns value to score1
		printf("Player 1, your new score is %d.\n\n", score1); // prints new score1
		printf("Player 2, press enter to roll the dice.");
		scanf("%c", &ch);
		score2 = roll(score2);
		printf("Player 2, your new score is %d.\n\n", score2);

		if (score1 >= 50) { // player 1 wins if score1 is 50 or above
			printf("Game Over: Player 1 won with a score of %d", score1);
			break; // ends the program
		} else if (score2 >= 50) { // player 2 wins if score2 is 50 or above
			printf("Game Over: Player 2 won with a score of %d", score2);
			break;
		}
		scanf("%c", &ch); // give players opportunity to quit, if they so choose
	}
}

 int roll(int scoreMod) {
	int die1 = 0;
	int die2 = 0;
	int score = 0 + scoreMod; // sets main score sum and ensures value does not reset to 0 every function call

	die1 = (rand() % 6) + 1; // rolls die
	die2 = (rand() % 6) + 1;
	printf("%d %d\n", die1, die2);

	if (die1 == 3 && die2 == 3) { // checks various cases of die1 and die2
		score = 0;
		printf("You rolled 3's, your score reset!\n");
	}
	else if (die1 == 6 && die2 == 6) {
		score = score + 25;
		printf("You rolled 6's, you scored 25 points!\n");
	}
	else if (die1 == 1 && die2 == 1 || die1 == 2 && die2 == 2 || die1 == 4 && die2 == 4 || die1 == 5 && die2 == 5) {
		score = score + 5;
		printf("You rolled doubles!\n");
	}
	else {
		printf("No doubles this turn.\n");
	}

	return score; // returns score to main function, going into score1 or score2 respectively
}
