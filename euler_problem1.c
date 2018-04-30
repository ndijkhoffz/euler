#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void main(void)
{
	//Introduce the function of the program and request user input
	printf("This program will calculate the sum of all the natural numbers,");
	printf("that are multiples of 3 or 5 below a number of your choice.\n");
	printf("What number do you want to try?\n");
	
	scanf(%d, uint64_t input_value); // here we need to get the save what was input from the user.
	//keep the checks in a separate function
	bool b_valid_number = check_for_valid_input(input_value);
	if (true == b_valid_number)
	{

	}
	// Compute calculations and run test
	
}

// Doxygen comments.
bool check_for_valid_input(uint64_t number)
{
	upper_limit = 1000000u;
	lower limit = 0u;
	assert(lower_limit < number);
	assert(upper_limit > number);
	printf("The number is valid!");
	return true;
}
