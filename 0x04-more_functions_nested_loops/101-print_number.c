#include "main.h"

/**
 * print_number - print any integer.
 * @n: integer.
 * Return: None here
 */
void print_number(int n)
{
	int m, i = 1, x;

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

	while (x /i >= 10)
	{
		/*x /= 10;*/
		i *= 10;
	}

	while (i >= 1)
	{
		_putchar(48 + (m / i));
		m %= i;
		i /= 10;
	}
}
