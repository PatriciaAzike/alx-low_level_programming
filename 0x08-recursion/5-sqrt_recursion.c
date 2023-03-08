#include "main.h"
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
 * Return: factorial
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
