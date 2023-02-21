#include "main.h"
/* betty style doc for function main goes there */
/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int hour, mins;

	for (hour = 0; hour < 24; hour++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			if (hour < 10)
			{
				_putchar('0' + 0);
				_putchar('0' + hour);
				_putchar(':');
			}
			else
			{
				_putchar('0' + hour / 10);
				_putchar('0' + hour % 10);
				_putchar(':');
			}

			if (mins < 10)
			{
				_putchar('0' + 0);
				_putchar('0' + mins);
			}
			else
			{
				_putchar('0' + mins / 10);
				_putchar('0' + mins % 10);
			}
			_putchar('\n');
		}
		if (hour != 23)
		{
			mins = 0;
		}
	}
}
