#include "main.h"
/* betty style doc for function main goes there */
/**
 * times_table - prints the 9 times table
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + 0);
		for (j = 1; j <= 9; j++)
		{
			k = i * j;
			_putchar(',');
			_putchar(' ');
			if (k / 10 ==  0)
			{
				_putchar(' ');
				_putchar('0' + k);
			}
			else
			{
				_putchar('0' + k/10);
				_putchar('0' + k % 10);
			}
		}
		_putchar('\n');
	}
}
