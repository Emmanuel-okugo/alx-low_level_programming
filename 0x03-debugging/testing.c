#include <stdio.h>

void print_remaining_days(int month, int day, int year)
{
    /* the if function is for the condition of a leap year */
    if ((year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)))
    {
        /* checks for February 29th to avoid adding 1 */
        if (month > 2)
        {
            day++;
        }
        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        if (month == 2 && day == 60)
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        }
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
}

