#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 * Print the alphabet in lowercase, followed by a new line. Exclude q and e.
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
