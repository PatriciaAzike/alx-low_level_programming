#include "main.h"
/* betty style doc for function main goes there */
/**
 * _isupper - checks for uppercase character
 * @c: integer
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
