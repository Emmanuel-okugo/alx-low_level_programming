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
	if (a >= 'A' && a <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
