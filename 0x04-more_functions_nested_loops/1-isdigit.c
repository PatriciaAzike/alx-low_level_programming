#include "main.h"
/* betty style doc for function main goes there */
/**
 * _isdigit - checks for digits btw 0-9
 * @c: integer
 *
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

