#include <stdio.h>
/**
 * main:entry point
 * Description:a c program that print size of data types
 * Return:Always 0 (success)
 */
int main(void)
{
	printf("size of a char: %u byte(s)\n", sizeof(char));
	printf("size of an int: %u byte(s)\n", sizeof(int));
	printf("size of a long int: %u byte(s)\n", sizeof(long));
	printf("size of a long long int: %u byte(s)\n", sizeof(long long int));
	printf("size of a float: %u byte(s)\n", sizeof(float));
		return (0);
}
