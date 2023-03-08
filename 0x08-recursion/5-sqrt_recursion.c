#include "main.h"
/**
 * helper - helper function
 * @n: integer
 * @i: divisor
 * Return: square of a number if the natural log exists
 */
int helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (helper(n, i + 1));
}
/**
 * _sqrt_recursion- gives the sqrt of a number
 * @n: integer
 * Return: -1 if the natural log does not exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	return (helper(n, 1));
}
