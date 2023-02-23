#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_most_numbers - print numbers 0-9 except 2 & 4
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
