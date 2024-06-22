#include "main.h"

/**
 * more_numbers - entry point
 * description: prints from 1 to 14 ten times
 *
 */

void more_numbers(void)
{
	int i, j, k;

	int module;

	for (k = 0; k < 10; k++)
	{
		for (i = 0, j = 0; i < 15; i++)
		{
			module = i % 10;

			/* to add 1 to module 10 to get the value 10 */
			if (i >= 10)
			{
				module = 1;
			}

			_putchar(module + '0');

			if (i >= 10)
			{
				_putchar(j + '0');
				j++;
			}
		}
		_putchar('\n');
	}
}

