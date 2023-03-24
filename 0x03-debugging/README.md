  		#include <stdio.h>

  		/**
  		* main - causes an infinite loop
  		* Return: 0
  		*/

  		int main(void)
  		{
  			int i;

  			printf("Infinite loop incoming :(\n");

  			i = 0;

  			while (i < 10)
  			{
  				putchar(i);
  			}

  			printf("Infinite loop avoided! \\o/\n");

  			return (0);
  		}
  		carrie@ubuntu:/debugging$







  				carrie@ubuntu:/debugging$ cat 3-main_a.c
  				#include <stdio.h>
  				#include "main.h"

  				/**
  				* main - takes a date and prints how many days are left in the year, taking
  				* leap years into account
  				* Return: 0
  				*/

  				int main(void)
  				{
  				    int month;
  				    int day;
  				    int year;

  				    month = 4;
  				    day = 01;
  				    year = 1997;

  				    printf("Date: %02d/%02d/%04d\n", month, day, year);

  				    day = convert_day(month, day);

  				    print_remaining_days(month, day, year);

  				    return (0);
  				}

  				carrie@ubuntu:/debugging$
