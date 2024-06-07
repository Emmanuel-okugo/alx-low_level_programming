#include <stdio.h>

/**
 * main - entry point
 * description: prints the first 50 fibonacci
 * numbers starting ffom 1 and 2
 * Return: always 0 (success)
 */

int main(void)
{
	unsigned long n = 1;

	unsigned long m = 2;

	unsigned long z = 2;

	unsigned long i;

	printf("%lu, %lu, ", n, m);
	for (i = 0; i < 48; i++)
	{
		if (i < 1)
		{
			n = n + m;
			printf("%lu, ", n);
		}
		else
		{
			n = n + z;
			printf("%lu", n);
			if (i != 47)
				printf(", ");

			z = n - z;
		}

	}
	putchar('\n');

	return (0);
}
