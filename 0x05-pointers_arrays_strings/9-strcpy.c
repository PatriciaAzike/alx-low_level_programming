#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - copies a string
 * @dest: first character
 * @src: character pointer
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	char *buffer = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return buffer;
}
