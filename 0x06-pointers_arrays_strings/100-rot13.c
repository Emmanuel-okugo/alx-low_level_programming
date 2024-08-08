#include <string.h>
#include <stdio.h>

/**
 * rot13 - entry point for this function
 * @c: string parameter 
 * description: a function that encodesa string in ROT-13 encoding
 * Return: pointer to the encoded string
 */

char *rot13(char *c)
{
	int i, j;
	int stringlength1;
	int stringlength2;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char letters_b[]="NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	stringlength1 = strlen(c);
	stringlength2 = strlen(letters);



	for (i = 0; i < stringlength1; i++)
	{
		for (j = 0; j < stringlength2; j++)
		{
			if (c[i] == letters[j])
			{
				c[i] = letters_b[j];
				break;
			}
		}
	}

	return (c);
}

