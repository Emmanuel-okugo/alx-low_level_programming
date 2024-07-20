#include <string.h>

/**
 * _strncat - entry point for this function
 * @dest: pointer to string parameter
 * @src: string to concatenate to dest
 * @n: number of bytes to concatenate
 * description: a function that concatenates n byte of
 * a string to another string
 * Return: pointer to the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
