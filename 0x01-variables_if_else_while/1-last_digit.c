#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point 
 * description: print the last digit in a number 
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	int str;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	str = n % 10;
	printf("\n last digit of %d is %d ", n, str);
		if (str > 5)
			printf("and is greatr than 5\n");
		if (str == 0)
			printf("and is zero\n");
		if (str < 6 && n != 0)
			printf("and is less than 6 and not zero\n");
	return (0);
}
