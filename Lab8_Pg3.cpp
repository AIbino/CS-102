#include <stdio.h> 

int main() { 
	int arr[100];       //declare integer array 
	int *pa;            //declare an integer pointer 
	int i, number;
	pa = arr; //assign base address of array

	for (i = 0; i < 100; i++) { //reading through pointer 
		number = pa[i];
		printf("Address of index %d = %d\n", i, number);
	}
	//printing the address
return 0;
}