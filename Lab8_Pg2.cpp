// Lab 8 Program 2
// CS 102-02
// Gabriel Mendez-Frances
// 11-21-2019
// Write a C program to modify value stored in other variable using pointer in C

#include <stdio.h>

int main(void) { 
	int num = 10;
	int num2 = 2019;
	int *numptr = &num; //declaring and initializing the pointer
	*numptr = num2; 	//updating the value
	printf("num = %d\n", num);

	return 0;
}