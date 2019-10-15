//This program demonstrates the use of returning information from a called functionto the caling function.
//This program takes two integers as input from the user and prints the result of their addition.
//Observe the formal parameters, actual paramaters, return type, return value and where the return value is stored.
#include <stdio.h>

int add(int num1, int num2); //function prototype
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

	res = add(a, b); //function call to add() with actual parameters stored in variables
	printf("Result is: %d", res);
}

int add(int num1, int num2) { //function definition (observe formal parameters)
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