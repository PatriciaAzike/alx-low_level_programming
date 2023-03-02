#include "main.h"

/**
 * rot13 - encode string using rot13
 * @s: string
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i = 0, j;
	char *leet_str = s;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i] != '\0')
	{
		j = 0;

		while (a[j] != '\0' && s[i] != a[j])
		{
			j++;
		}
		if (s[i] == a[j])
		{
			leet_str[i] = b[j];
		}
		i++;
	}

	return (leet_str);
}
