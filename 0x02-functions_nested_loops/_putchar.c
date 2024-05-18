#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void print(void)
{

	char *string = "_putchar";

	write(1, string, 8);
	printf("\n");


}
