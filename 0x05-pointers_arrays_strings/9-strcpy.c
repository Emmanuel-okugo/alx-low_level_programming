#include <string.h>
#include <stdlib.h>

/**
 * _strcpy - entry point for this function
 * @dest: parameter
 * @src: parameter
 * description: a function that copies thet string pointr, including
 * the terminal null byte(\0), to another pointer
 *
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	
	return (dest);
}
