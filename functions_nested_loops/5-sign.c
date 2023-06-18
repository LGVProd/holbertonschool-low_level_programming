#include "main.h"
/**
 * print_sign - main function
 * @n: input value
 * Return: 1 if n > 0
 * 0 if n = 0
 * -1 if n < 0
 * Write a function to print the sign of a number.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
