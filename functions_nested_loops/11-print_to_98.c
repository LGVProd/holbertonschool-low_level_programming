#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_to_98 - main function
 * @n: number to start from, until reaching 98
 * Print all natural numbers from n to 98, followed by a new line
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (n != 98)
			{
				printf(",");
				printf(" ");
			}
		}
		printf("\n");
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (n != 98)
			{
				printf(",");
				printf(" ");
			}
		}
		printf("\n");
	}
}
