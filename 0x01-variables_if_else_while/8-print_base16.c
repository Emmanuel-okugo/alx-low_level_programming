#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * description: printing base16 digits with putchar
 * Return: always 0 (success)
 */
int main()
{

	char str;

	char chr;
	
	for (chr = '0'; chr <= '9'; chr++)
	{
		putchar(chr);
	}

	for (str = 'a'; str <= 'f'; str++)
	{
		putchar(str);
	}

	putchar('\n');
	
	return (0);
}
