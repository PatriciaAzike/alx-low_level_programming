#include "main.h"

/**
 * leet - function that encodes string into 1337
 * @s: string
 * Return: string
 */

char *leet(char *s)
{
	int i = 0;
	int x[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int y[11] = {'4','4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (s[i] != '\0')
	{
		int j = 0;

		while (j < 11)
		{
			if (s[i] == x[j])
			{
				s[i] = y[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
