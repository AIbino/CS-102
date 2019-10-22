// Array Practice
// Gabriel Mendez-Frances
// CS 102-02
// 10-22-2019

#include <stdio.h>

int main() {
	float grades[5] = {0};
	float mult = 1;
	printf("Enter 5 values for the array.\n");
	for (int i = 0; i < 5; i++) {
		scanf("%f", &grades[i]);
		printf("The value is: %.2f\n", grades[i]);
	}
	for (int o = 0; o < 5; o++) {
		mult = mult * grades[o];
	}
	printf("The value of the array multiplied is %.2f\n", mult);
}