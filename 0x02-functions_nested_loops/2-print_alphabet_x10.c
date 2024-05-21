#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 *
 */

void print_alphabet_x10(void)
{

	int i;

	for (i = 0; i < 10; i++)
	{
		char character = 'a';

		while (character <= 'z')
		{
			_putchar(character);

			character++;
		}
		_putchar('\n');
	}
}
