#include <stdio.h>
#include <string.h>

/**
 * puts_half - entry point for this function
 * @str: type char pointer parameter
 * description: a function that prints half of a string followed by a new line
 *
 */

void puts_half(char *str)
{
	int i;
	int stringlength;
	int str_half;

	stringlength = strlen(str);
	str_half = (stringlength - 1) / 2;

	for (i = 0; i < stringlength; i++)
	{
		if (i > str_half)
		{
			printf("%c", *str);
		}
		str++;
	}
	putchar('\n');
}
