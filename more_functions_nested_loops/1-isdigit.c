#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - main function
 * @c: main integer
 * Return: 1 if digit, 0 otherwise
 * Check for a digit (0 through 9)
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
