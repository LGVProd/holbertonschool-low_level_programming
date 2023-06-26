#include "main.h"
#include <stdio.h>
#include <string.h>

/*Write a function that concatenates two strings.*/

char *
_strncat(char *dest, char *src, int n)
{
	int i;
	int strlendest = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[strlendest + i] = src[i];
	}
	dest[strlendest + i] = '\0';

	return (dest);
}
