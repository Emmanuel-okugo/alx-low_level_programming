#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * description: a program that prints possible combinations of single-digit numbers
 * Return: always 0 (success)
 */
int main (void)
{
	int i;

	for (i = 1; i < 10; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
