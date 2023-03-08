#include "main.h"
/**
 * is_prime_number - checks if a number is prime
 * @n: integer
 * Return: 1 if prime, 0 otherwise
 */
int helper(int, int);
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (helper(n, 2));
}

/**
 * helper - helper function
 * @x: integer
 * @i: divisor
 * Return: 1 if prime, 0 otherwise
 */
int helper(int x, int i)

{
	if (x == 2)
	{
		return (1);
	}
	else
	{
		if (x % i == 0)
		{
			return (0);
		}
		else if (i * i > x)
		{
			return (1);
		}
	}
	return (helper(x, i + 1));
}
