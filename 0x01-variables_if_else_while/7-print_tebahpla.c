#include <stdio.h>
/**
 * main - entry point
 * description: printing 1 to 9 backwards
 * Return: always 0 (success)
 */
int main(void)
{
	char chr;

	for(chr = 'z'; chr >= 'a'; chr--)
	{
		putchar(chr);
	}
	putchar('\n');

	return (0);
}


