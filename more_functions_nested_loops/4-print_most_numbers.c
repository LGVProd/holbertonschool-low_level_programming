#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - main function
 * Print all numbers from 0 to 9, excepting 2 and 4,
 * followed by a new line.
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
