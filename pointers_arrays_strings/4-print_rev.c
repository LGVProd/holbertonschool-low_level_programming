#include "main.h"
#include <stdio.h>
/**
 * print_rev - main function
 * @s: main character
 * Print a string in reverse, followed by a new line.
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != 0)
	{
		a++;
	}
	for (; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
