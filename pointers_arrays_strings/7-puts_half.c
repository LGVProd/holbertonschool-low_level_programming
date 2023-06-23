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
	int i = 0;
	int length = strlen(str);

	if (i % 2 == 0)
	{
		for (i = (length / 2); str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (length + 1 / 2); str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar ('\n');
}
