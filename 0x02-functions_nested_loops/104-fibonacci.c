#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - print the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	double x1 = 1, x2 = 2, x3;
	int i = 2;

	printf("%.0f, %.0f", x1, x2);
	while (i < 98)
	{
		x3 = x1 + x2;
		printf(", %.0f", x3);
		x1 = x2;
		x2 = x3;
		i++;
	}
	printf("\n");
	return (0);

}
