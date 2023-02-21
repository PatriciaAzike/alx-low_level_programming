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
	int i = 0;

	printf("%.0f, %.0f", x1, x2);
	while (i < 96)
	{
		x3 = x1 + x2;
		i++;
		printf(", %.0f", x3);
		x1 = x2;
		x2 = x3;
	}
	printf("\n");
	return (0);

}
