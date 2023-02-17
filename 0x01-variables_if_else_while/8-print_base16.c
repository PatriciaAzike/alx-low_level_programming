#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 16)
	{
		char hex;

		if (i < 10)
		{
			hex = '0' + i;
		}
		else
		{
			hex = 'a' + (i - 10);
		}
		putchar(hex);
		i++;
	}
	putchar('\n');
	return (0);
}
