#include "main.h"
/* betty style doc for function main goes there */
/**
 * more_numbers - prints numbers 10 times
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int num;

		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar('0' + num / 10);
			}
			_putchar('0' + num % 10);
		}
		_putchar('\n');
	}
}
