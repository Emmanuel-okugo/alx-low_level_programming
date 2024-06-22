#include "main.h"

/**
 * print_triangle - entry point
 * @size: parameter that indicates the size of triangle
 * description: a function that prints a triangle, followed by a new line
 *
 */

void print_triangle(int size)
{
	int i = 1, j, k;
	int reduced = size;

	if (size > 0)
	{
		while (i <= size)
		{
			for (j = reduced; j > 1; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}

			reduced = reduced - 1;
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
