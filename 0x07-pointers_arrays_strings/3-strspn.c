#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: character
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, count = 0;
	const char* st;

	while (accept[i] != '\0')
	{
		st = s;
		j = 0;
		while (st[j] && st[j] != ',' && st[j] != ' ' && st[j] != '\0')
		{
			if (st[j] == accept[i])
			{
				count++;
			}
			j++;
		}
		i++;
	}
	return (count);
}
