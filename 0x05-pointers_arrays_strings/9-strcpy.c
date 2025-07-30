/**
 * _strcpy - entry point for this function
 * @dest: parameter
 * @src: parameter
 * description: a function that copies thet string pointr, including
 * the terminal null byte(\0), to another pointer
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}

	*(dest + i) = '\0';

	return (dest);
}
