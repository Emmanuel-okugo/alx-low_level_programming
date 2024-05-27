#include <stdio.h>
#include <stdlib.h>

/**
 * jack_bauer - entry point
 * description: this prints evry inutes of Jack Baeur's life
 * Retrun: NULL
 */

void jack_bauer(void)
{
	int i;

	int j;

	int k;

	int l;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == 2 && j > 3)
				exit(1);

			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					printf("%d%d:%d%d\n", i, j, k, l);
				}
			}
		}
	}
}
