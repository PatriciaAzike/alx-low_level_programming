#include "main.h"

/**
 * leet - function that encodes string into 1337
 * @s: string
 * Return: string
 */

char *leet(char *s)
{
	int i, j;
	char *leet_str = s;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; a[i] != '\0'; i++)
		{
			if (s[j] == a[i])
			{
				leet_str[j] = b[i];
				break;
			}
		}
	}

	return (leet_str);
}
