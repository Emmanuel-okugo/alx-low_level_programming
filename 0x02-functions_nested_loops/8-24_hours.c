/** Wait, before you judge the simplicity of this code.
 * i know how to make it simple by using two loops, the inner counts to 59
 * while the outer loop counts to 23.
 * i wanted to make it count one at a time to give a little idea of making it
 * count like a clock at real time and giving me the idea of using multi dim
 * arrays if i wanted to.
 *
 * i know i just sounded stupid ;)
 * but that's okay :)
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * jack_bauer(void): entry point
 *
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
					printf("%d%d : %d%d\n", i,j,k,l);
				}
			}
		}
	}
}
