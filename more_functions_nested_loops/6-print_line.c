#include "main.h"
#include <stdio.h>
/**
 * print_line - main function
 * @n: main integer
 * Draw a straight line in the terminal.
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
