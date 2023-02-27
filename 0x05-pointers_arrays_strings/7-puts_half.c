#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half a string
 * @str: string
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str);

	if (len % 2 == 0)
	{
		i = len / 2;
		while (i < len)
		{
			putchar(str[i]);
			i++;
		}
	}
	else
	{
		i = (len - 1) / 2;
		while (i < len)
		{
			putchar(str[i]);
			i++;
		}
	}
	putchar('\n');
}
