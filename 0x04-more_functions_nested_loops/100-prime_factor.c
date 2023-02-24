#include <stdio.h>

/**
 * main - checks the largest prime factor
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int x = 612852475143, max_p = -1, p;
	
	for (p = 2; p * p <= x; p++)
	{
		while (x % p == 0)
		{
			max_p = p;
			x /= p;
		}
	}
	if (x > 1 && x > max_p)
	{
		max_p = x;
	}

	printf("%ld\n", max_p);
	return (0);
}
