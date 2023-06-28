#include "main.h"
#include <stdio.h>

/*Changes all lowercase letters of a string to uppercase.*/

char *
string_toupper(char *a)
{
	int i = 0;

	while (a[i])
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -= 32;
		}
		i++;
	}
	return (a);
}
