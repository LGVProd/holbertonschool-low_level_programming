#include <stdio.h>
/**
 * main - main function
 * Print all single digit numbers of base 10, starting from 0,
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}
	putchar('\n');
	return (0);
}
