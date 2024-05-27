#include <stdio.h>
#include "main.h"

/**
 * times-table - entry point
 * description: print multiplication table
 * to nine times
 * Return: always 0 (success)
 */

void times_table(void)
{
	int i;

	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d", i * j);

			if (j != 9)
			{
				printf(",");
				printf(" ");
			}


		}

		printf("\n");

	}

}


