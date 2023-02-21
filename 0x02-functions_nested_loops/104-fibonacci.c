#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - print the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long x1 = 1, x2 = 1, x3;
	int i = 2;

	printf("%lu, %lu", x1, x2);
	while (i < 98)
	{
		x3 = x1 + x2;
		i++;
		if (x3 > 999999999)
		{
			unsigned long top = x3 / 1000000000;
			unsigned long bot = x3 % 1000000000;

			printf(", %lu%09lu", top, bot);
		}
		else
		{
			printf(", %lu", x3);
		}
		x1 = x2;
		x2 = x3;
	}
	printf("\n");
	return (0);

}
