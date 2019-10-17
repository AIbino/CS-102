#include <stdio.h>

int max(int num1, int num2);

int main() {

	/* local variable definition */
	int a;
	int b;
	int ret;

	/* Accept the value for a and b from the user */
	printf("Welcome! This program tells you the maximum value of two different numbers.\n");
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	/* function call */
	ret = max(a, b);
	if (ret != 0) {
		printf("Max value is: %d\n", ret);
	}
	else {
		printf("There is no maximum value - both numbers are equal.\n");
	}
	return 0;
}
/* return the max between two numbers */
int max(int num1, int num2) {
	int max;
	if (num1 > num2) {
		max = num1;
	}
	else if (num1 < num2) {
		max = num2;
	} else {
		max = 0;
	}
	return max;
}