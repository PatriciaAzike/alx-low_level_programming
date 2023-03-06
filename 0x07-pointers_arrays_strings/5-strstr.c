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
	char *hay;
	char *need;

	while (*haystack != '\0')
	{
		hay = haystack;
		need = needle;
		while (*haystack != '\0' && *need != '\0' && *haystack == *need)
		{
			haystack++;
			need++;
		}
		if (*need == '\0')
			{
				return (hay);
			}
		haystack = hay + 1;
	}
	return (NULL);
}
