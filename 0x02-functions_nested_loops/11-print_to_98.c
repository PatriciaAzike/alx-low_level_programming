#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * print_to_98 - prints numbers up to or down to 98
 * @n: integer
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("%d\n", n);
}
