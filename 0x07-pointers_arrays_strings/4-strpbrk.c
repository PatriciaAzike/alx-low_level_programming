#include "main.h"
#include <string.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string
 * @accept: character
 * Return: Returns a pointer to the byte in s that matches a byte in accept
 */
 char *_strpbrk(char *s, char *accept)
{
	char *st = accept;

	while (*s != '\0')
	{
		while (*st != '\0')
		{
			if (*s == *st)
			{
				return (s);
			}
			st++;
		}
		s++;
		st = accept;
	}
	return (NULL);
}
