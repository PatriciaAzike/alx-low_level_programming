#include "main.h"
#include <stdio.h>

/**
 * _memset - fills a memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: integer
 * Return: no return.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return s;
}
