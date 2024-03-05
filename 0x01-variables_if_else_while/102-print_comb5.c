#include <stdio.h>
/**
 * main - entry point
 * description: print with putchar
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	int j;

	int k;

	int l;

	/* printin the required output*/
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = 1; l <= 9; l++)
				{
					putchar((char) '0' + i);
					putchar((char) '0' + j);
					putchar(' ');
					putchar((char) '0' + k);
					putchar((char) '0' + l);

					/* condition for printing comma and space */
					if (i != 9 || j != 8 || k != 9 || j != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
			putchar('\n');

			return (0);
}
