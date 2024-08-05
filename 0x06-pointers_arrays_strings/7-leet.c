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
	int i, j;
	int stringlength = strlen(c);
	char lowercase[5] = {'a', 'e', 'o', 't', 'l'};
	char uppercase[5] = {'A', 'E', 'O', 'T', 'L'};
	char numb[5] = {'4', '3', '0', '7', '1'};

	/* replacing the letters */
	for (j = 0; j < 5; j++)
	{
		for (i = 0; i < stringlength; i++)
		{
			if (c[i] == uppercase[j] || c[i] == lowercase[j])
			{
				c[i] = numb[j];
			}
		}

	}

	return (c);
}
