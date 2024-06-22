#include "main.h"

/**
 * print_line - entry point
 * @n: parameter for number of lines to be printed
 * description: this function draws a line on the terminal
 *
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
