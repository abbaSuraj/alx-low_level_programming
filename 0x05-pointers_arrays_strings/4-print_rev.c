#include <stdio.h>
/**
 * print_rev - reversing a string
 * @s: First pointer
 * i: Second variable
 * c: variable for convenience
 *
 * Description: function that reverses strings
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int c = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		c++;
	}
	for (i = c - 1; i >= 0; i--)
	{
		printf("%c", *(s + i));
	}
	printf("\n");
}
