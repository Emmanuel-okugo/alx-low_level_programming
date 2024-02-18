#include <stdio.h>
/**
 * main - entry point
 * description: printing the alphabets in lowercase except q and e using putchar
 * Return: always 0 (success)
 */
int main(void)
{
	char chr;

	for (chr = 'a'; chr < 'z'; chr++)
	{
		if (chr != 'q' && chr != 'e')
			putchar(chr);
		else
		{ }
	}
	putchar('\n');

	return 0;
}
