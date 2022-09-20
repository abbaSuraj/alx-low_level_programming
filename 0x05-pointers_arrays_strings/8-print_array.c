#include <stdio.h>
/**
 * print_array - print elements of array
 * @a: pointer
 * i: Second variable
 * @n: number of elements
 *
 * Description: function that prints elements of array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
}
