#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_number - print any number
 * @n: integer
 *
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	int i = 1, m;

	if (n < 0)
	{
		_putchar('-');
		m = n * -1;
	}
	else
	{
		m = n;
	}

	while (m / i >= 10)
	{
		i *= 10;
	}

	while (i > 0)
	{
		_putchar('0' + (m / i));
		m %= i;
		i /= 10;
	}
}
