#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_numbers - print numbers from 0-9
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
