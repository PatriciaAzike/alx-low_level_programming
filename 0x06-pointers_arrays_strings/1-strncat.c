#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenates a string
 * @dest: character
 * @src: character
 * @n: integer
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = strlen(dest);

	while (i < n && *src != '\0')
	{
		dest[len + i] = *src;
		src++;
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
