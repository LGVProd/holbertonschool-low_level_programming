#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - main function
 * @str: main string
 * Print the second half of a string.
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int startloc = (length + 1) / 2;
	int i = startloc;

	for (; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar ('\n');
}
