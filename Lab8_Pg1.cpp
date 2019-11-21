// Lab 8 Program 1
// CS 102-02
// Gabriel Mendez-Frances
// 11-21-2019

#include <stdio.h> 

int main() { 
	int inum = 1; //declare int variable and initialize it to some value 
	float fnum = 2; //declare float variable and initialize it to some value 
	double dnum = 3; //declare double variable and initialize it to some value 
	char ch = 'a'; //declare char variable and initialize it to some value
	int *iptr = &inum; //declare a pointer variable to int and initialize it to point to int 
	float *fptr = &fnum; //declare a pointer variable to float and initialize it to point to float 
	double *dptr = &dnum; //declare a pointer variable to double and initialize it to point to double 
	char *cptr = &ch; //declare a pointer variable to char and initialize it to point to char

	printf("*inum = %d\n*fnum = %f\n*dnum = %lf\n*cptr = %c\n----------\n", *iptr, *fptr, *dptr, *cptr); 
	//print the value of all the four variables using pointers (using “*” dereferencing operator) 
	printf("&inum = %d\n&fnum = %d\n&dnum = %d\n&ch = %d\n----------\n", &inum, &fnum, &dnum, &ch); 
	//print the addresses of memory locations of all 4 variables using the “&” operator 
	printf("iptr = %d\nfptr = %d\ndptr = %d\ncptr = %d\n----------\n", iptr, fptr, dptr, cptr); 
	//print the content of the pointers using the pointer name 
	printf("&iptr = %d\n&fptr = %d\n&dptr = %d\n&cptr = %d\n----------\n", &iptr, &fptr, &dptr, &cptr); 
	//print the Address of the pointers using the pointer name 
return 0;
}