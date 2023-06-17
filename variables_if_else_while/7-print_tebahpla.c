#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Print the alphabet in lowercase AND backwards, followed by a new line
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
