#include <stdio.h>

/**
 * main - checks the largest prime factor
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int x = 612852475143;
	long p = 2;

	while (p <= x)
	{
		while (x % p == 0)
		{
			x /= p;
			p--;
		}
		p++;
	}
	printf("%ld\n", p);
	return (0);
}
