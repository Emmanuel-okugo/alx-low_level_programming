#include <stdio.h>
/**
 * main:entry point
 * Description:a c program that print size of data types
 * Return:Always 0 (success)
 */
int main()
{
	printf("size of a char: %d byte(s)\n", sizeof(char));
	  printf("size of an int: %d byte(s)\n", sizeof(int));
	    printf("size of a long: %d byte(s)\n", sizeof(long));
	      printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
	        printf("size of a float: %d byte(s)\n", sizeof(float));
		return (0);
}
