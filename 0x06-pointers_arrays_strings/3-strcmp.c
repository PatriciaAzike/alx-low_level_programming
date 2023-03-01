#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - copies a string
 * @s1: character
 * @s2: character
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return ((int)(unsigned char)(*s1) - (int)(unsigned char)(*s2));
}
