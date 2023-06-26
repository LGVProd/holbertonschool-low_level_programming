#include "main.h"
#include <stdio.h>
#include <string.h>

/*Reverse the content of an array of integers*/

void
reverse_array(int *a, int n)
{
	int i;
	int copy;

	for (i = n - 1; i >= n / 2; i--)
	{
		copy = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = copy;
	}

}
