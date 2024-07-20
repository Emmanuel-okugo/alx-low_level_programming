#include <string.h>

/**
 * _strncpy - entry point
 * @dest: destination of copied string
 * @src: string to copy from
 * @n: number of bytes to copy
 * description: a function that copies n
 * bytes of a string to another string variable
 * Return: pointer to copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
