#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _islower - main function
 * Write a function that checks for lowercase characters
 * @c: input value
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
