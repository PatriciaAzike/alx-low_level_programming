#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: character
 * @src: character
 * @n: integer
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *src != '\0')
	{
		dest[i] = *src;
		src++;
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
