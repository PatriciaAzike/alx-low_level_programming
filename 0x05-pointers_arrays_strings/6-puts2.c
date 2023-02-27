#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints a string
 * @str: string
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i = 0;
	int len = strlen(str);

	while (i < len)
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}

