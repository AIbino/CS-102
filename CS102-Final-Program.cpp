#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void introToComp();
void introToC();
void vars();
void input();
void conditionals();
void loops();
void loopscont();
void funcs();
void funcscont();
void arrs();
void arrscont();
void strings();
void pointers();
void files();
void summary();
void credits();

int main() {
	bool run = true;
	int option;

	printf("Welcome to the Ultimatte CS 102 Final Exam Prep Program.\n");
	while (run == true) {
		printf("Please select an option to learn more about it.\n\n");
		printf("1. Intro to Computers\n");
		printf("2. Intro to C\n");
		printf("3. Variables & Arithmetic\n");
		printf("4. Constants & User Input\n");
		printf("5. Condiional Statements\n");
		printf("6. Loops\n");
		printf("7. Loops (cont.)\n");
		printf("8. Functions\n");
		printf("9. Functions (cont.)\n");
		printf("10. Arrays\n");
		printf("11. Arrays (cont.)\n");
		printf("12. Strings\n");
		printf("13. Pointers\n");
		printf("14. File I/O\n");
		printf("15. Summmary\n");
		printf("16. Credits\n\n");

		scanf("%d", &option);

		switch (option) {
			case 1:
				introToComp();
				break;
			case 2:
				introToC();
				break;
			case 3:
				vars();
				break;
			case 4:
				input();
				break;
			case 5:
				conditionals();
				break;
			case 6:
				loops();
				break;
			case 7:
				loopscont();
				break;
			case 8:
				funcs();
				break;
			case 9:
				funcscont();
				break;
			case 10:
				arrs();
				break;
			case 11:
				arrscont();
				break;
			case 12:
				strings();
				break;
			case 13:
				pointers();
				break;
			case 14:
				files();
				break;
			case 15:
				summary();
				break;
			case 16:
				credits();
				break;
			default:
				printf("\nERROR: Invalid Input\n");
				break;
		}
	}

	return 0;
}

void introToComp() {
	printf("-------------INTRO TO COMPUTERS---------------\n");
	printf("Just testing.\n");
	printf("----------------------------------------------\n\n");
}

void introToC() {

}

void vars() {

}

void input() {

}

void conditionals() {

}

void loops() {

}

void loopscont() {

}

void funcs() {

}

void funcscont() {

}

void arrs() {

}

void arrscont() {

}

void strings() {

}

void pointers() {

}

void files() {

}

void summary() {

}

void credits() {
	printf("\n--------------------CREDITS--------------------");
	printf("\nThe Ultimate CS 102 Final Exam Prep Program\n");
	printf("Programmed by Gabriel Mendez-Frances\n");
	printf("Content provided by Acharya Deepak\n");
	printf("-----------------------------------------------\n\n");
	system("pause");
}