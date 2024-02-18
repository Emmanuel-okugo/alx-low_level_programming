#include <stdio.h>
/**
 * main - entry point
 * descripton: printing from 0 to 9
 * Return: always 0 (success)
 */
int main(void)
{
	int num = 0;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	printf("\n");

	return (0);
}


