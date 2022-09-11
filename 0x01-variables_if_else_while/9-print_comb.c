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
		if (k != 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	return (0);
}
