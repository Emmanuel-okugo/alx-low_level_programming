#include <stdio.h>

/**
 * main - entry point
 * description: program that prints
 * the alphabet in lower case
 * Return: always 0 (success)
 */

void print_alphabet(void);

int main(void)
{
	/*function calling */
	print_alphabet();

	return(0);
}

void print_alphabet(void)
{
	int i;

	for(i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');

}

