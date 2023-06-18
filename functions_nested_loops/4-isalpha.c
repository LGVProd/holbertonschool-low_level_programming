#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - main function
 * Write a function that checks for alphabetic characters
 * @c: input value
 * Return: 1 if letter (uppercase or lowercase), 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
