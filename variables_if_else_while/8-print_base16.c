#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Print all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	int number;
	char hex;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
