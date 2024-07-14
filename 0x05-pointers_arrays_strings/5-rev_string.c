#include <string.h>
#include <stdio.h>

/**
 * rev_string - entry point for this function
 * @s: pointer parameter of type char
 * description: a function that reverses a string
 *
 */
void rev_string(char *s)
{
	char *first;
	char *last;
	char str;
	int str_len;

	str_len = strlen(s);

	last = s + str_len - 1;
	first = s;

	while (first < last)
	{
		str = *last;
		*last = *first;
		*first = str;
		first++;
		last--;
	}
}
