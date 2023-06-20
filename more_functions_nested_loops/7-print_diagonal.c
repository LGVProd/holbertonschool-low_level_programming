#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - main function
 * @n: main integer
 * Draw a diagonal line on the terminal.
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			if (a != 0)
			{
				for (b = 2; b <= a; b++)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
