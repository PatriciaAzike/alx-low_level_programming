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
	int i = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / i >= 10)
	{
		i *= 10;
	}

	while (i > 0)
	{
		_putchar('0' + (n / i));
		n %= i;
		i /= 10;
	}
}
