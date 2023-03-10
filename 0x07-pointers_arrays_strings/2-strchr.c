#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer to the first occurence of c in s or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return ('\0');
}
