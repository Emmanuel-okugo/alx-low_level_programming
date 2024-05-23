#include <ctype.h>

/**
 * _isalpha - entry point
 * description: checks for  alphabet
 * @c carries argument to be checked
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
