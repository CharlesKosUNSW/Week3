// Charles Kos
// 15.06.2022
// z5160675@unsw.edu.au

// Print a bunch of asterisks

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

void t4(void) {

	//Create variables
	int input = 0;

	//Get user input
	printf("Please enter an integer: ");

	//Assign input
	scanf("%d", &input);

	//Create counter
	//What if we make i = 1?
	int i = 0;

	//What if we wrote i <= input?
	while (i < input) {

		printf("*\n");

		//Increment counter
		//What if we forgot this?
		i = i + 1;
	}

}