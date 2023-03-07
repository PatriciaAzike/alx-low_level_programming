#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring.
 * Return: pointer to the beginning of substring
*/
char *_strstr(char *haystack, char *needle)
{
	char *beg_hay;
	char *p_need;

	for (; *haystack != '\0'; haystack++)
	{
		beg_hay = haystack;
		p_need = needle;

		for (; *haystack != '\0' && *p_need != '\0' && *haystack == *p_need; haystack++, p_need++)
		{
		}
		if (!*p_need)
			return (beg_hay);
		haystack = beg_hay;
	}
	return (0);
}
