#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - entry point
 * @n: carries the number
 *
 * Return: NULL
 */

void print_to_98(int n)
{
	int i;

	int j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	else
	{
		for (j = n; j >= 98; j--)
		{
			printf("%d", j);
			if (j != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
