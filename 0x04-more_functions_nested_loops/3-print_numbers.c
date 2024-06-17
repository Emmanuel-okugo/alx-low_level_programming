#include "main.h"

/**
 * print_numbers - entry point
 * Description: prints from 1 to 9
 * Return: NULL
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
