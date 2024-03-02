#include <stdio.h>
/**
 * main - entry point
 * description: learning putchar
 * Return: always 0 (success)
 */
int main(void)
{
        int str = '1';

        int chr = '0';

        int count = 8;

        int i;

        int j;

        for(i = 0, j = 0; j <= 72; i++, j++)
        {
                putchar((char) chr);
                putchar((char) str + i);

                if(i == count)
                {
                        chr = chr + 1;
                        i = 0;
                }
                putchar(',');
                putchar(' ');
        }
        putchar('\n');

        return(0);
}

