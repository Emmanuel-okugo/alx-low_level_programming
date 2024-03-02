#include <stdio.h>
/**
 * main - entry point
 * description: learning putchar
 * Return: always 0 (success)
 */
int main(void)
{
	int str = '0';

	int i;

	int j;

	for (i = 0; i <= 8; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			putchar((char) str + i);
			putchar((char) str + j);
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
