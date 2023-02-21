#include "main.h"
/* betty style doc for function main goes there */
/**
 * times_table - prints the 9 times table
 * @i: first integer
 * @j: second integer
 * @k: i * j
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k / 10 == 0)
			{
				_putchar(' ');
				_putchar('0' + k);	
			}
			else
			{
				_putchar('0' + k/10);
				_putchar('0' + k % 10);
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
