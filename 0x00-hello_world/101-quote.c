#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * description: using write to print text to standard output
 * return: one (successful)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 54);

	return (1);
}
