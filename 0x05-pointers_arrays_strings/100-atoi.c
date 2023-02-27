#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _atoi - converts a string to an integer
 * @s: string
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int integer = 0;
	int sign = 1;
	int digit;

	while (*s != '\0')
	{
		if (*s == '+')
		{
			sign *= 1;
		}
		else if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';
			integer = integer * 10 + digit;
		}
		else if (integer != 0)
		{
			break;
		}
		s++;
	}
	return (integer * sign);
}
