#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: pointer to the first occurence of c in s or NULL
 */
char *_strchr(char *s, char c)
{
	if (c == '\0')
	{
		return s;
	}
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return NULL;
}
