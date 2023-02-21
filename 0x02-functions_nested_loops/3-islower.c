#include "main.h"
/* betty style doc for function main goes there */
/**
 * _islower - checks for lowercase character
 * @c: integer
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
