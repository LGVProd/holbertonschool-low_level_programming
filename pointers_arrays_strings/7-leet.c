#include "main.h"
#include <stdio.h>

/*Write a function that encodes a string into 1337*/

char *
leet(char *a)
{
	char *b = a;
	char l[] = { 'a', 'e', 'o', 't', 'l' };
	char n[] = { 4, 3, 0, 7, 1 };
	int i;

	while (*a)
	{
		for (i = 0; i < 5; i++)
		{
			if (*a == l[i] || *a == l[i] - 32)
			{
				*a = n[i] + '0';
			}
		}
		a++;
	}
	return (b);
}
