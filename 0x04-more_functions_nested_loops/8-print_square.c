#include "main.h"

/**
 * print_square - prints a square of length size
 * @size: integer
 *
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int i = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		while (i < size)
		{
			int j = 0;

			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
