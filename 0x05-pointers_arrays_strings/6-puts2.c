#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * puts2 - entry point for this function
 * @str: type char pointer parameter
 * description: a function that prints every other character of a string
 * starting with the first character, followed by a new line
 *
 */
void puts2(char *str)
{
	int i;
	int stringlength;

	/* getting string length */
	stringlength = strlen(str);

	/* displaying */
	for (i = 0; i < stringlength; i++)
	{
		if (i == 0 || i % 2 == 0)
		{
			printf("%c", *str);
		}
		str++;
	}
	printf("\n");
}
