#include "main.h"
#include <stdio.h>
/**
 * _strlen - main function
 * @s: main integer
 * Return: @s
 * Write a function to return the length of a string.
 */
int _strlen(char *s)
{
	int a;
	int b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		b++;
	}
	return (*s);
}
