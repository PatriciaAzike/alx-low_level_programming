#include "main.h"
/* betty style doc for function main goes there */
/**
 * _abs - computes the absolute value of an integer
 * @x: integer
 *
 * Return: Always 0 (Success)
 */
int _abs(int x)
{
	if  (x < 0)
	
	{
		return (-x);
	}
	else if (x == 0)
	{
		return (0);
	}
	else
	{
		return (x);
	}
}
