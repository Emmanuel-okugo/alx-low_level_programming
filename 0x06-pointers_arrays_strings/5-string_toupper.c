#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * string_toupper - entry point for this function
 * @str[]: array parameter
 * description: a function that converts all lowercase characters of a string to uppercase
 * Return: pointer to the converted string
 */

char *string_toupper(char *string)
{
	int i = 0, k;
	char uppercase;
	char lowercase;
	int stringlength = strlen(string);

	while (i < stringlength)
	{
		if (isupper(string[i]) == 0)
		{
			lowercase = 'a';
			uppercase = 'A';
			for (k = 0; k < 26; k++)
			{
				if (string[i] == lowercase)
				{
					string[i] = uppercase;
					break;
				}
				lowercase++;
				uppercase++;
			}
		}

		i++;
	}


	return (string);
}
