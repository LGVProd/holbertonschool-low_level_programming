#include "main.h"
#include <stdio.h>
/**
 * times_table - main function
 * Print the 9 times table, starting with 0
 */
void times_table(void)
{
	int a;
	int b;
	int c = 9;

	for (a = 0; a <= c; a++)
	{
		printf("%d", 0);
		printf(",");
		for (b = 1; b <= c; b++)
		{
			printf("%3d", a * b);
			if (b != c)
			{
				printf(",");
			}
		}
		printf("\n");
	}
}
