#include <stdio.h>
/**
 * main:entry point
 * Description:a c program that print size of data types
 * Return:Always 0 (success)
 */
int main()
{
	printf("size of char: %d byte(s)\n",sizeof(char));
	  printf("size of int: %d byte(s)\n",sizeof(int));
	    printf("size of long: %d byte(s)\n",sizeof(long));
	      printf("size of long long int: %d byte(s)\n",sizeof(long long int));
	        printf("size of float: %d byte(s)\n",sizeof(float));
		return (0);
}
