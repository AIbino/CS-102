// Lab 6 Problem 1
// Gabriel Mendez-Frances
// CS 102-02
// 10-29-2019

#include <stdio.h>
#define N 10

int main(void) {  
	int arr[10] = { 0 };
	int max, min, sum, mean;

	for (int i = 0; i < 10; i++) {
		printf("Enter element %d of the array.\n", i);
		scanf("%d", &arr[i]);
	}

	printf("\nYou entered the following elements:\n");
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	min = arr[0];
	max = arr[0];
	sum = 0;
	mean = 0;

	for (int i = 0; i < 10; i++) {
		sum = sum + arr[i];
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
		mean = sum / 10;
	}
	printf("\nThe sum is: %d\nThe min is: %d\nThe max is: %d \nThe average is: %d\n", sum, min, max, mean);
}