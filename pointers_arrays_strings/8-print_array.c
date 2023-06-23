#include "main.h"
#include <stdio.h>
/**
 * print_array - Print a number of elements of an array of integers,
 * followed by a new line.
 * @a: one of the main integers
 * @n: the other main integer
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i == n)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d", a[i]);
			printf(", ");
		}
	}
	printf("\n");
}
