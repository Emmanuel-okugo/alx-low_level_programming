#include <stdio.h>

/**
 * main - entry point
 * description: prints the first 50 fibonacci 
 * numbers starting ffom 1 and 2
 * Return: always 0 (success)
 */

int main(void)
{
	int n = 1;

	int m = 2;

	int z = 2;

	int i;

	printf("%d, %d, ", n, m);
	for (i = 0; i <= 50; i++)
	{
		if (i < 1)
		{
			n = n + m;
			printf("%d, ", n);
		}
		else
		{
			n = n + z;
			printf("%d", n);
			if (i != 50)
				printf(", ");

			z = n - z;
		}

	}
	putchar('\n');

	return (0);
}
