#include "main.h"
#include <stdio.h>
/**
 *swap_int - main function
 *@a: one of the main integers
 *@b: the other main integer
 *Swap the values of two integers.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
