#include <stdio.h>
/**
 * main - entry point
 * description: using putchar function to print upper case alphabet
 * return: always 0 (success)
 */
int main(void)
{
	char chr = 'a';

	for (chr = 'a'; chr < 'z'; chr++)
	{
		putchar(chr);
	}
	putchar('\n');

	return (0);
}
