#include "main.h"

/**
 * print_line - prints a straight line n times
 * @n: integer
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			_putchar(95);
			i++;
		}
		_putchar('\n');
	}
}
