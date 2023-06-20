#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - main function
 * @c: main integer
 * Return: 1 if uppercase, 0 otherwise
 * Check for uppercase character.
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
