#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - main function
 * @number: lastdigit will be extracted from here
 * Return: lastdigit
 * Print the last digit of a number.
 */
int print_last_digit(int number)
{
	int lastdigit;

	lastdigit = abs(number % 10);
	{
		_putchar('0' + lastdigit);
	}
	return (lastdigit);
}
