#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * string_toupper - changes a string to upper case
 * @ch: character
 *
 * Return: Always 0.
 */
char *string_toupper(char *ch)
{
	int i = 0;

	while (ch[i] != '\0')
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
		{
			ch[i] -= 32;
		}
		i++;
	}
	return (ch);
}
