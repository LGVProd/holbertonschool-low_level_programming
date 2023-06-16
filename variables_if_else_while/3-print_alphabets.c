#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 * Print the alphabet in lowercase, then in uppercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
