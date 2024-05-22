
#include <ctype.h>

int _islower(int c)
{
	int checker;

	checker = islower(c);

	if(checker == 0)
	{
		return (0);
	}
	else
	{
		return(1);
	}
}

