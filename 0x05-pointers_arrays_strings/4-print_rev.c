#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_rev - entry point for this function
 * @s: parameter
 * decsription: a function that prints a string
 * i reverse followed by a new line
 *
 */

void print_rev(char *s)
{
        char str_cpy[100];
        int len;
        char *start;
        char *end;
        char temp;

        strcpy(str_cpy, s);

        len = strlen(str_cpy);

        start = str_cpy;
        end = str_cpy + len - 1;

        while(start < end)
        {
                temp = *end;
                *end = *start;
                *start = temp;
                start++;
                end--;
        }

        puts(str_cpy);
}

