#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring.
 * @haystack: first character
 * @needle: second character
 * Return: pointer to the beginning of the located substring
 */
 char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && haystack[i+j] == needle[j]; j++)
			;
		if (needle[j] == '\0')
			{
				return (haystack + i);
			}
	}
	return (NULL);
}
