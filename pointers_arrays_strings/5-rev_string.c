#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - main function
 * @s: main integer
 * Write a function that reverses a string.
 */
void rev_string(char *s)
{
	int a = 0;
	int length = strlen(s);
	char change;
	char str[500];

	strcpy(str, s);
	length--;

		if (length > 0)
		{

			for (a = 0; a <= (length / 2); a++)
			{
				change = str[a];
				s[a] = str[(length - a)];
				s[(length - a)] = change;
			}
		}
}
