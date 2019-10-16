// Functions Example - Calculator
// Gabriel Mendez-Frances
// CS 102-02 
// 10-15-2019

#include <stdio.h>

int add(int num1, int num2); //function prototypes
int subtract(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);

int main() {
	int a, b;
	int res;
	int op;

	printf("Please enter num1: ");
	scanf("%d", &a);
	printf("Please enter num2: ");
	scanf("%d", &b);
	printf("Please select an operation from the following:\n");
	printf("[1] Addition\n");
	printf("[2] Subtraction\n");
	printf("[3] Multiplication\n");
	printf("[4] Division\n");
	scanf("%d", &op);

	switch (op) { // Case for each operation
		case 1:
			res = add(a, b);
			break;
		case 2:
			res = subtract(a, b);
			break;
		case 3:
			res = multiply(a, b);
			break;
		case 4:
			res = divide(a, b);
			break;
	}

	printf("The result is: %d.", res);
}

int add(int num1, int num2) { //function definition
	int c = num1 + num2;
	return c;
}

int subtract(int num1, int num2) { 
	int c = num1 - num2;
	return c;
}

int multiply(int num1, int num2) { 
	int c = num1 * num2;
	return c;
}

int divide(int num1, int num2) {
	int c = num1 / num2;
	return c;
}
