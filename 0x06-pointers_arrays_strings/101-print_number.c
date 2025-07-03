#include "main.h"

/**
 * print_number: entry point to this function
 * @n: variable that contains the number
 * description: prints numbers using _putchar only
 * return: void
 */

void print_number(int n)
{
	int size = 1;
	int div;
	int module;
	int max_int_value = 1000000000;

	/* printing - for negative values */
	if (n < 0)
	{
		_putchar('-');
	}

	/* finding the size(place value) of the number */
	while ((n / (size * 10) != 0) && ((size * 10) <= max_int_value)) /* checking wether the future divisor is zero */
	{
		size *= 10;
	}

	/* getting and printing the number */
	while (size > 0)
	{
		div = n / size;
		module = div % 10;

		if (module < 0)
		{
			_putchar('0' + (-module));
		}
		else
		{
			_putchar('0' + module);
		}

		size = size/10;
	}
}
