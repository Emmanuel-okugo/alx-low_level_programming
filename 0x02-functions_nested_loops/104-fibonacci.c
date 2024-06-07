#include <stdio.h>

/**
 * main - entry point
 * description: prints the first 50 fibonacci
 * numbers starting ffom 1 and 2
 * Return: always 0 (success)
 */

int main(void)
{
	unsigned long n = 2;

	unsigned long z = 1;

	unsigned long i;

	printf("%lu, %lu, ", z, n);
	for (i = 0; i < 96; i++)
	{
		n = n + z;
		printf("%lu", n);
		if (i != 95)
			printf(", ");
		z = n - z;

	}
	putchar('\n');

	return (0);
}
