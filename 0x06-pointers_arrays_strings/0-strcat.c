#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatenates a string
 * @dest: character
 * @src: character
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i = strlen(dest);

	while (*src != '\0')
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i++] = '\0';
	return (dest);
}
