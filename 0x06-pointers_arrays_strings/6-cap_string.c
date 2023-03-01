#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * cap_string - capitalizes all words of a string
 * @ch: character
 *
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int i = 0;
	char *sep = " \t\n,;.!?\"(){}";

	while (s[i] != '\0')
	{
		if (i == 0 || strchr(sep, s[i-1]))
		{
			s[i] = (s[i] >= 'a' && s[i] <= 'z') ?  (s[i] - 'a' + 'A') : s[i];
		}
		/*else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] -= 'A' + 'a';
		}*/
		/*else if (s[i] == ' ')
		{
			j--;
			i++;
			continue;
		}
		i++;*/
		i++;
	}
	s[i] = '\0';
	return (s);
}
