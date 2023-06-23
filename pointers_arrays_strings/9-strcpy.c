#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Copy the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: main character
 * @src: main character
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

