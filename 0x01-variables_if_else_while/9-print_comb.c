#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
		putchar((k % 10) + '0');
		putchar(44);
	}
	return (0);
}
