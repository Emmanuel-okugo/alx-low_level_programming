#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * leet - entry point for this function
 * @c: pointer to a string parameter
 * decsription: a function that that replaces each:
 * a and A to 4
 * e and E to 3
 * o abd O to 0
 * t and T to 7
 * l and L to 1
 * Return: pointer to the modified string
 */

char *leet(char *c)
{
	int i;
	int stringlength = strlen(c);

	/* replacing the letters */
	for (i = 0; i < stringlength; i++)
	{
		if (c[i] == 'a' || c[i] == 'A')
		{
			c[i] = '4';
		}
		if (c[i] == 'e' || c[i] == 'E')
                {
                        c[i] = '3';
                }
		if (c[i] == 'o' || c[i] == 'O')
		{
			c[i] = '0';
		}
		if (c[i] == 't' || c[i] == 'T')
		{
			c[i] = '7';
		}
		if (c[i] == 'l' || c[i] == 'L')
		{
			c[i] = '1';
		}
	}

	return (c);
}
