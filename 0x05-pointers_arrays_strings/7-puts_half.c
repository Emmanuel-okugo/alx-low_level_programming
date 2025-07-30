#include "main.h"
/**
 * puts_half - entry point for this function
 * @str: type char pointer parameter
 * description: a function that prints half
 * of a string followed by a new line
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, n;
	int length_of_the_string = 0;

	/* findidng the length of the string */
	while (*(str + i) != '\0')
	{
		length_of_the_string++;
		i++;
	}

	/* finding and printing the last half of the string */
	if (length_of_the_string % 2 == 0)
	{
		i = length_of_the_string / 2;
		while (i < length_of_the_string - 1)
		{
			_putchar(*(str + i));
			i++;
		}
	}
	else
	{
		n = (length_of_the_string - 1) / 2;
		i = length_of_the_string - n;
		while (i < length_of_the_string - 1)
		{
			_putchar(*(str + i));
			i++;
		}
	}
	_putchar('\n');
}
