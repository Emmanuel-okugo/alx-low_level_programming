#include <stdio.h>
/**
 * main - -entry point
 * description: printing with putchar
 * Return: always 0 (success)
 */

int main(void)
{
	int i;

	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			putchar((i / 10) + '0'); /* first digit of i */
			putchar((i % 10) + '0'); /* second digit of i */
			putchar(' ');
			putchar((j / 10) + '0'); /* first digit of j */
			putchar((j % 10) + '0'); /* second digit of j */

			/* condition for printing comma and space */
			if (!(i == 98 && j == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

