#include <ctype.h>

/**
 * _isdigit - entry point
 * @a: integer parameter
 *
 * Return: 1 (digit) 0(not digit)
 */

int  _isdigit(int a)
{
	int get_return;

	get_return = isdigit(a);

	if (get_return > 0)
	{
		return(1);
	}
	else
	{
		return (0);
	}
}
