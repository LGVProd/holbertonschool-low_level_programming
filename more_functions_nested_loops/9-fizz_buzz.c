#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Return: 0
 * Print the numbers from 0 to 100, followed by a new line.
 * For multiples of three, print 'Fizz'.
 * For multiples of five, print 'Buzz'.
 * For multiples of both, print 'FizzBuzz' instead.
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (a == 100)
		{
			printf("%d", a);
		}
		else
		{
			printf("%d", a);
			printf(" ");
		}
	}
	putchar('\n');
	return (0);
}
