// Charles Kos
// 15.06.2022
// z5160675@unsw.edu.au
// Copied from tutorial questions for COMP1911 W2

// Question: what will the output be? Will the if statement do anything different to the while loop?

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

void t1(void) {

	//Define variables
	int inputNum, i;

	//Get user input
	printf("Enter a number: ");
	scanf("%d", &inputNum);

	//Store input in 
	i = inputNum;

	//If statement
	//if (i <= 5) {
	//	printf("%d\n", i * i);
	//	i++;
	//}

	// While loop
	while (i <= 5) {
		printf("%d\n", i * i);
		i++;
	}

}