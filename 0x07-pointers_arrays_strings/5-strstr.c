#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * @_strstr - locates a substring.
 * @haystack: first character
 * @needle: second character
 *
 * Return: Returns a pointer to the beginning of the located substring
 */
 char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	char* st;

	while (needle[i] != '\0')
	{
		st = haystack;

		while (*st != '\0')
		{
			if (*st == needle[i])
			{
				return (st);
			}
			st++;
		}
		i++;
	}
	return NULL;
}
