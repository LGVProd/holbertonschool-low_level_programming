#include "main.h"
/**
 * print_alphabet_x10 - main function
 * Print the alphabet in lowercase, ten times in a row,
 * followed by a new line.
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int counter;
	char alphabet;

	for (counter = 0; counter < 10; counter++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
