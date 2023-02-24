#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	int m, i, x;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	x = m;
	i = 1;

	while (x > 9)
	{
		x /= 10;
		i *= 10;
	}

	for (; i >= 1; i /= 10)
	{
		_putchar(48 + ((m / i) % 10));
	}
}
