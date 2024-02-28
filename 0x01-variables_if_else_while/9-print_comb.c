#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * description: printing possible combinations of single-digit numbers
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	int count;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		count += 1;
		if (count == 10)
			goto label_end;
		putchar(',');
label_end:
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
