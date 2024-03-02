#include <stdio.h>
/**
 * main - entry point
 * descriotion: printing combination of numbers
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	int j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar((char) ('0' + i));
			putchar((char) ('0' + j));
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

