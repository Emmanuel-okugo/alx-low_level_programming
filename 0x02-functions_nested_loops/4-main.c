#include "main.h"

/**
 * main - check the code
 *
 * Return always 0 (success)
 */
int main(void)
{
	int r;


	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('0');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

