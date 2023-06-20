#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * Check for uppercase character
 * _isupper - main function
 * @c: main integer
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper (int c)
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
