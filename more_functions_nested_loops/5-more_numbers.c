#include "main.h"
#include <stdio.h>
/**
 * more_numbers - main function
 * Print the numbers from 0 to 14, 10 times,
 * followed by a new line.
 */
void more_numbers(void)
{
	int counter;
	int numbers;

	for (counter = 0; counter < 10; counter++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers >= 10)
			_putchar(numbers / 10);
			_putchar(numbers % 10);
		}
	}
	_putchar('\n');
}
