#include <stdio.h>
#include <stdlib.h>

/**
 * print_times_table - entry point
 * @n: parameter
 *
 */

void print_times_table(int n)
{
	int i;

	int j;

	int product;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < n + 1; j++)
		{
			product = i * j;
			
			printf("%d", product);
			if (j != n)
			{
				printf(",");
				
				if ((i * (j  + 1)) / 10 < 1)
				{
					printf("   ");
				}
				else if ((i * (j + 1)) / 10 >= 10)
				{
					printf(" ");
				}
				else
				{
					printf("  ");
				}
			}
		}
		printf("\n");
	}
}
