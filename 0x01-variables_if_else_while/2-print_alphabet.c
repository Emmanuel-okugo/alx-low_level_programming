#include <stdio.h>
/**
 * main - entry point
 * description: using putchar function to print upper case alphabet 
 * return: always 0(success)
 */
char chr = 'A';

int main(void)
{
	for (chr = 'A'; chr < 'Z'; chr++)
	{
		putchar(chr);
	}
	putchar('\n');

	return (0);
}
