#include <stdio.h>

/**
 * print_array - entry point
 * @a: pinter parameter
 * @n: integer parameter
 * description: a function that prints n elemets of an arrar of integers
 * followed by a new line
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *a);
		a++;

		if (i != n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
