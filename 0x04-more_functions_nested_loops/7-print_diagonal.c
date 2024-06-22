#include "main.h"

/**
 * print_diagonal - entry point
 * @n: parameter for the number of slashes/diagonal to print
 * description: finction that draws a diagonal line on the terminal
 *
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
		return;
	}
}
