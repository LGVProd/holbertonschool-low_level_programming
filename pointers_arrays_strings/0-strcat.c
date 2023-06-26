#include "main.h"
#include <stdio.h>
#include <string.h>

/*Write a function that concatenates two strings.*/

char *
_strcat(char *dest, char *src)
{
	int i;
	int strlendest = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[strlendest + i] = src[i];
	}
	dest[strlendest + i] = '\0';

	return (dest);
}
