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
	int i;
	int length = strlen(str);

	for (i = (length / 2); str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			_putchar(str[i] + 1 / 2);
		}
	}
	_putchar ('\n');
}
