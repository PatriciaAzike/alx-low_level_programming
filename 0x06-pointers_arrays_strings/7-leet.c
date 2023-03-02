#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * leet - a function that encodes a string into 1337.
 * @str: string
 *
 * Return: Always 0.
 */
char *leet(char *str)
{
	int i = 0, j = strlen(str);
	char leet_map[128] = {0};
	char *leet_str = str;

	/* fill leet_map with the character mappings */
	leet_map['a'] = leet_map['A'] = '4';
	leet_map['e'] = leet_map['E'] = '3';
	leet_map['o'] = leet_map['O'] = '0';
	leet_map['t'] = leet_map['T'] = '7';
	leet_map['l'] = leet_map['L'] = '1';
	
	while (i < j)
	{
		char c = str[i];
		char leet_c = leet_map[(int)c];
		
		if (leet_c != 0)
		{
			leet_str[i] = leet_c;
		}
		i++;
	}
    return (leet_str);
}
