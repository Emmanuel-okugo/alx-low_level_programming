#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always o (success)
 */

int main(void)
{
	int i;

	int sum = 0;

	/* getting the sum */
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}


	/* printing the sum */
	printf("%d\n", sum);

	return (0);
}
