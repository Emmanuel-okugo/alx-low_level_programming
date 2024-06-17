#include "main.h"
#include <ctype.h>

/**
 * _isupper - entry point
 * @a: parameter
 *
 * Return: 0 (not uppercase) 1(uppercase)
 */

int _isupper(char a)
{
	int is_return;

	is_return = isupper(a);

	if (is_return > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
