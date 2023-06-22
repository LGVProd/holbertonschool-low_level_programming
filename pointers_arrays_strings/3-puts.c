#include "main.h"
#include <stdio.h>
/**
 * _puts - main function
 * @str: main character
 * Print a string, followed by a new line, to stdout.
 */
void _puts(char *str)
{
	if (*str == '\0')
		return (0);
	_puts(str + 1);
	_putchar(*str);
	_putchar('\n');
}
