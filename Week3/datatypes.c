// Charles Kos
// 15.06.2022
// z5160675@unsw.edu.au

// This is to demonstrate what different data types are useful for

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

void datatypes(void) {

	//Create an int, double and char
	//Don't worry about long
	int	integer = 0;
	double decimal = 0.0;

	//Assign a single input to each of our variables
	printf("Enter a number or a letter: ");
	//scanf("%d", &integer);

	scanf("%lf", &decimal);
	integer = decimal;

	//Assign input to each variable
	//decimal = integer;

	printf("\n\n");

	//Print out what each variable has stored
	printf("Type int    has value: %d\n", integer);
	printf("Type double has value: %lf\n", decimal);

	printf("\n\n");

	//Print sizes of data types
	printf("Size of an int is %d\n", sizeof(int));
	printf("Size of a double is %d\n", sizeof(double));

}