#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies a memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: integer
 * Return: no return.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *buffer = dest;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (buffer);

}
