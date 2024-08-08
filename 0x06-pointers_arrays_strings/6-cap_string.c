#include <string.h>
/**
 * cap_string - entry point for this code
 * @c: pointer parameter to string
 * description: a function that capitalizes the first
 * character of each words in a string
 * Return: pointer to the string
 */
char *cap_string(char *c)
{
	char uppercase = 'A', lowercase = 'a';
	int stringlength = strlen(c);
	int i, j, k;

	/* checking if the first character if the string is uppercase */
	for (k = 0; k < 26; k++)
	{
		if (c[0] == lowercase)
		{
			c[0] = uppercase;
			break;
		}
		uppercase++;
		lowercase++;
	}

	/* algorithm for converting others */
	for (i = 1; i <= stringlength; i++)
	{
		if (c[i] == ' ' || c[i] == '\t' || c[i] == '\n' || c[i] == '.')
		{
			uppercase = 'A';
			lowercase = 'a';
			
			for (j = 0; j < 26; j++)
			{
				if (c[i + 1] == lowercase)
				{
					c[i + 1] = uppercase;
					break;
				}
				uppercase++;
				lowercase++;
			}
		}
	}
	return (c);
}
