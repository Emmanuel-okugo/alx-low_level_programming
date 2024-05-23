#include <ctype.h>

int _isalpha(int c)
{
	int checker;

	checker = isalpha(c);

	if(checker == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
