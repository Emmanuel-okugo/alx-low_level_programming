#include <stdio.h>

/**
 * main - entry point
 * description: gets the sum of the even fibanocci numbers
 * return: always 0 (success)
 */

int main(void)
{
	unsigned long n = 2;

	unsigned long z = 1;

	unsigned long sum = 0;

	sum = n;

	while (n < 4000000)
	{
		n = n + z;
		if (n % 2 == 0)
		{
			sum = sum + n;
		}
		z = n - z;

	}

	printf("%lu\n", sum);

	return (0);
}
