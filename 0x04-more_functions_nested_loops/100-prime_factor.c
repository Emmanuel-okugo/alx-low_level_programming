#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * description: fins the largest prime factor of a number
 * Return: always 0 (success)
 */

int main(void)
{
	long number = 612852475143;
	long maxPrime = -1;
	long i;


	/* Divide number by 2 until it becomes odd */
	while (number % 2 == 0)
	{
		maxPrime = 2;
		number /= 2;
	}

	/* Check for odd factors from 3 to sqrt(number) */
	for (i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			maxPrime = i;
			number = number / i;
		}
	}

    /* This condition is to check if number is a prime number greater than 2 */
	if (number > 2)
		maxPrime = number;

	printf("%ld\n", maxPrime);

	return (0);
}
