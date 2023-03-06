#include "main.h"
#include <string.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: character
 * Return: Returns a pointer to the byte in s that matches accept
 */
 char *_strpbrk(char *s, char *accept)
{
	char *p = accept;

	while (*s)
	{
		while (*p)
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
		p = accept;
	}
	return (NULL);
}
