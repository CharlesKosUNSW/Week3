// Charles Kos
// 15.06.2022
// z5160675@unsw.edu.au

// Print a bunch of asterisks

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

void t9(void) {

	//Variables
	int input = 0;

	//Get user input
	printf("Enter and integer: ");

	//Retrieve input
	scanf("%d", &input);

	//Row loop
	int i = 0;
	while (i < input) {

		//Column loop
		int j = 0;
		while (j < input) {

			//If coordinate for row and col. are the same, print * 
			//Otherwise print a space
			if (i == j) {
				printf("*");
			}
			else {
				printf(" ");
			}

			j = j + 1;
		}

		//'Finish' row with a newline
		printf("\n");

		i = i + 1;
	}

}