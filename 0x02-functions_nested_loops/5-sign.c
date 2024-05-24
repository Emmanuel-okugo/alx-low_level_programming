#include "main.h"

/**
 * print_sign - entry point
 * @n: carries argument
 * descripton: chexks for signs and prints them
 * Return: 1(psitive) -1(negative) 0(0)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
