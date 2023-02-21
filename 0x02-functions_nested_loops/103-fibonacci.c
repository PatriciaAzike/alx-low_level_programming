#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - finds and prints the sum of even Fibonacci terms
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int x1 = 1, x2 = 2, x3 = 0, ev_fib = 0;

	while (x2 <= 4000000)
	{
		if (x2 % 2 == 0)
		{
			ev_fib += x2;
		}
		x3 = x1 + x2;
		x1 = x2;
		x2 = x3;
	}
	printf("%ld\n", ev_fib);
	return (0);
}
