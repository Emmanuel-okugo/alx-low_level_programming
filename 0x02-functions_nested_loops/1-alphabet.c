#include "main.h"

/**
 * main - entry point
 * description: program that prints
 * the alphabet in lower case
 * Return: always 0 (success)
 */


int main(void)
{
	print_alphabet();

	return(0);
}

void print_alphabet(void)
{
	char a = 'a';

	while(a <= 'z')
	{
		_putchar(a);
		a++;
	}
	putchar('\n');
}


