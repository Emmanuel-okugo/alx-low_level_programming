#include <stdio.h>
/**
 * main - entry point
 * Description: printing letters in upper case and lower case with putchar()
 * Return: always 0 (success)
 */
int main(void)
{
	char chr = 'a';

	char str = 'A';

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		putchar(chr);
	}
	for (str = 'A'; str <= 'Z'; str++)
	{
		putchar(str);
	}
	putchar('\n');
	return (0);
}
