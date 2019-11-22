// Lab 8 Program 3
// CS 102-02
// Gabriel Mendez-Frances
// 11-21-2019
// Write a C program to read array elements and print with addresses

#include <stdio.h> 

int main() {
	int arr[100];       //declare integer array 
	int *pa;            //declare an integer pointer 
	int *number;
	int i;
	pa = arr; //assign base address of array

	for (i = 0; i < 100; i++) { //reading through pointer 
		number = &pa[i];
		printf("Address of index %d = %d\n", i, number); //printing the address
	}
	return 0;
}
