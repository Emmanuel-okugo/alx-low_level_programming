#include <stdio.h>

/**
 * reverse_array - entry point
 * @a: pointer to array
 * @n: number of elements in the array
 * description: a function that reverses the numbers stored in an array
 *
 */

void reverse_array(int *a, int n)
{
	int *addressl;
	int count;
	int hold_value;
	int i;
	int *fake_a;

	fake_a = a;
	count = n / 2;


	/* finding the address of the laast memeber of the array */
	for (i = 0; i < n; i++)
	{
		if (i == 12)
		{
			addressl = fake_a;
		}
		fake_a++;
	}

	for (i = 0; i < count; i++)
	{
		hold_value = *a;
		*a = *addressl;
		*addressl = hold_value;

		addressl--;
		a++;
	}

}
