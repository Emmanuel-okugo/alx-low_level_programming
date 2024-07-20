#include <string.h>

/**
 * _strcat -  entry point for this function
 * @dest: first pointer to string parameter
 * @src: second pointer to string parameter to be concatenated to dest
 * description: a function that concatenates two strings
 * Return: a pointer to the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *concat_str;

	concat_str = strcat(dest, src);

	return (concat_str);
}
