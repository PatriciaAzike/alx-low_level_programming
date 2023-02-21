#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_last_digit - Prints the last digit of a number
 * @x: integer
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int x)
{
	int n = x % 10;

	if (n < 0)
	{
		_putchar(-n + '0');
		return (-n);
	}
	else
	{
		_putchar(n + '0');
		return (n);
	}
}
