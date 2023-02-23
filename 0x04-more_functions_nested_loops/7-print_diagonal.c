#include "main.h"

/**
 * print_diagonal - prints a diagonal line n times
 * @n: integer
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		while (i < n)
		{
			int j = 0;

			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
}
