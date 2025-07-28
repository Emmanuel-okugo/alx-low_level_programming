#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * _atoi - entry point
 * @s: parameter string to convert 
 * descrition: a function that converts a sting to an integer
 * Return: integer
 */
int _atoi(char *s)
{
	int i, j = 0, sign = 1;
	int  strlength;
	char newstr[100];

	strlength = strlen(s);

	/* checking if any digit is present */
	for (i = 0; i < strlength; i++)
	{
		if (isdigit(s[i]) != 0)
		{
			break;
		}
		if (i == strlength - 1)      /* if no digit is found untill the end of the end of the string */
		{
			return (0);
		}
	}

	/* checking for sign */
	for (i = 0; i < strlength; i++)
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}
		if (isdigit(s[i]) != 0)
		{
			break;
		}
	}

	/* finding and converting the numbers */
	for (i = 0; i < strlength; i++)
	{
		if(isdigit(s[i]) != 0)
		{
			newstr[j] = s[i];
			j++;
			if(s[i + 1] == ' ' || i == (strlength - 1))
			{
				newstr[j] = '\0';
				break;
			}
		}
	}

	return (sign * atoi(newstr));
}
