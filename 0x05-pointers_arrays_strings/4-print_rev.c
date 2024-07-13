#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_rev - entry point for this function
 * @s: parameter
 * decsription: a function that prints a string
 * i reverse followed by a new line
 *
 */

void print_rev(char *s)
{
	int len;
	char *start;
	char *end;
	char temp;
	char *str_cpy;

	len = strlen(s);

	/* dynamically allocating memory to copy the read only char variable */
	str_cpy = malloc(sizeof(char) * len);
	if (str_cpy == NULL)
	{
		puts("memory allocation failed!!");
	}

	strcpy(str_cpy, s);

	start = str_cpy;
	end = str_cpy + len - 1;

	while(start < end)
	{
		temp = *end;
		*end = *start;
		*start = temp;
		start++;
		end--;
	}

	puts(str_cpy);
}
