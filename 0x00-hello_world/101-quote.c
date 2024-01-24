#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * description: using write to print text to standard output
 * return: always 1 (successful)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);

	return (1);
}
