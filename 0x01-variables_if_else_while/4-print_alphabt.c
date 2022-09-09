#include <stdio.h>
/**
 * main - entry point
 * Return: retur 0
 */
int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
