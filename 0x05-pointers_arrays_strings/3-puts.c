#include <stdio.h>
#include <string.h>
/**
 * _puts - printing string and newline
 * @z: First argument
 *
 * Description: show length of inputted with new line at end
 * Return: void
 */
void _puts(char *z)
{
	while (*z != '\0')
	{
		printf("%c", *z++);
	}
	printf("\n");
}
