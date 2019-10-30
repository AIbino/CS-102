// Lab 6 Problem 3
// Gabriel Mendez-Frances
// CS 102-02
// 10-29-2019

#include <stdio.h>
#define N 10

int main(void) {
	int arr1[N] = { 0 };
	int arr2[N] = { 0 };

	for (int i = 0; i < N; i++) {
		printf("Enter element %d of the array.\n", i);
		scanf("%d", &arr1[i]);
	}

	printf("\nYou entered the following elements:\n");
	for (int i = 0; i < N; i++) {
		printf("%d ", arr1[i]);
	}

	printf("\nThe array has been copied, as shown here:\n");
	for (int i = 0; i < N; i++) {
		arr2[i] = arr1[i];
		printf("%d ", arr2[i]);
	}
}
