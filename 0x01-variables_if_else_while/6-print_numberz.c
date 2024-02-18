#include <stdio.h>
/**
 * main - entry point
 * description: using putchar to print 0 to 9
 * Return: always 0 (always)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
