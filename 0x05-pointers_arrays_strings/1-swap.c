#include <stdio.h>
/**
 * swap_int - swaps two variables
 * @arg1: First operand
 * @arg2: Second operand
 * temp: variable for convenience
 *
 * Description: function that swaps values
 * Return: void
 */
void swap_int(int *arg1, int *arg2)
{
	int temp;

	temp = *arg1;
	*arg1 = *arg2;
	*arg2 = temp;
}
