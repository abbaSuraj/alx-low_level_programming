#include <stdio.h>
#include <string.h>
/**
 * _strlen - printing length
 * @z: First argument
 * counter: emergency variable
 *
 * Description: show length of inputted values
 * Return: void
 */
int _strlen(char *z)
{
	int counter;

	counter = 0;
	while (*z != '\0')
	{
		counter++;
		z++;
	}
	return (counter);
}
