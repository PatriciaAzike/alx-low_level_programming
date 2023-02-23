#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_line - prints a straight line n times
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
