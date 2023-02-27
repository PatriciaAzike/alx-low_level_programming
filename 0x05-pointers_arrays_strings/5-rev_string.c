#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - prints the output of a tring in reverse
 * @s: string
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i = 0;
	int len = strlen(s);

	while (i < len / 2)
	{
		char temp = s[i];
		
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
	}
}
