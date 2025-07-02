#include <stdio.h>

/**
 * print_number: entry point to this function
 * description: prints numbers using _putchar only
 * return: void
 */

void print_number(int n)
{
	int size = 1;
	int div;
	int module;

	/* printing - for negative values */
	if (n < 0)
	{
		putchar('-');
	}

	/* finding the size of the number */
	while (n / (size * 10) != 0) /* checking wether the future divisor is zero */
	{
		size *= 10;
	}

	/* getting and printing the number */
	while(size > 0)
	{
		div = n / size;
		module = div % 10;
		
		if (module < 0)
		{
			putchar('0' + (-module));
		}
		else
		{
			putchar('0' + module);
		}
		
		size = size/10;
	}
}
