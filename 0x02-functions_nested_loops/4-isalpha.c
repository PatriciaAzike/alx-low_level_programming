#include "main.h"
/* betty style doc for function main goes there */
/**
 * _isalpha - checks for alphabetic character
 * @c: integer
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
