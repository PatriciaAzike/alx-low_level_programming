#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_times_table - prints times table for any specified number
 * @i: first integer
 * @j: second integer
 * @k: i * j
 *
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int i, j, k;


	if (n < 0 || n > 15)
	{
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
                        
				if (k / 10 == 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + k);
				}
				else if (k / 10 >= 1 && k / 10 < 10)
				{
					_putchar(' ');
					_putchar('0' + k/10);
					_putchar('0' + k % 10);
				}
				else
				{
					_putchar('0'  + k/100);
					_putchar('0' + (k/10) % 10);
					_putchar('0' + k % 10);
				}
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
		
			}
			_putchar('\n');
		}
	}
}
