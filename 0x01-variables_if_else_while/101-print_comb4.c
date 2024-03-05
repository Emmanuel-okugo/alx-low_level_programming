#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits
 * Numbers are separated by ", " and printed in ascending order
 * Only putchar function is allowed, with a maximum of six times
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	int  j;

	int  k;

	/* Loop through all possible combinations */
	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				/* Print digits */
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);

				/* Print separator if not the last combination */
				if (!(i == 7 && j == 8 && k == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	/* Print newline */
	putchar('\n');
	return (0);
}
