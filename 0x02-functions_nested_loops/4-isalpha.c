#include <ctype.h>

/**
 * _isalpha - entry point
 * description: checks if c is an  alphabet
 * Return: 1 (success) or 0 (failure)
 */

int _isalpha(int c)
{
	int checker;

	checker = isalpha(c);

	if (checker == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
