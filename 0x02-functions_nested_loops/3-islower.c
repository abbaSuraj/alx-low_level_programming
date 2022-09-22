#include "main.h"
/**
 * _islower - function for lowercasing.
 * @c: char type letter
 * Return: 1 if lowercase, 0 if otherwise
 */
iint _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
