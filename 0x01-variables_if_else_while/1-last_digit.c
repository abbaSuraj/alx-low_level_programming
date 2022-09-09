#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d ", n);

