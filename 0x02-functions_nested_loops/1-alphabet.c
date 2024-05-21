#include "main.h"

/**
 * print_alphabet - entry point
 * description: program that prints
 * the alphabet in lower case
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}


