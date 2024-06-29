#include "main.h"

/**
 * print_number - entry point
 * @n: parameter
 * description: prints and integer
 *
 */

void print_number(int n)
{
	  int look_alike = n;

	  /* change negative to positive */
	  if (n < 0)
	  {
		  n = -look_alike;
	  }
	  
	  
	  if (n/10 == 0)
	  {
		  /* checking to add the negative sign */
		  if (look_alike < 0)
		  {
			  _putchar('-');
			  _putchar(n + '0');
		  }
		  else
		  {
			  _putchar(n + '0');
		  }
	  }
	  else if (n/10 <= 9 && n/10 >= 0)
	  {
		  /* checking for negative*/
		  if (look_alike < 0)
		  {
			  _putchar('-');
			  _putchar((n / 10) + '0');
		  }
		  else
		  {
			  _putchar((n / 10) + '0');
		  }
			  _putchar((n % 10) + '0');
	  }
	  else if (n/10 <= 99 && n/10 >= 10)
	  {
		  if (look_alike < 0)
		  {
			  _putchar('-');
			  _putchar((n / 100) + '0');
		  }
		  else
		  {
			  _putchar((n / 100) + '0');
		  }
		  _putchar((((n / 10) - (n / 100) * 10)) + '0');
		  _putchar((n % 10) + '0');
	  }
	  else if(n/10 < 9999 && n/10 > 99)
	  {
		  if (look_alike < 0)
		  {
			  _putchar('-');
			  _putchar((n/1000) + '0');
		  }
		  else
		  {
			  _putchar((n/1000) + '0');
		  }
		  _putchar((((n / 100) * 100) - ((n / 1000) * 1000)) + '0');
		  _putchar(((((n / 10) * 10) - ((n / 100) * 100)) - 18) + '0');
		  _putchar((n % 10) + '0');
	  }
}


