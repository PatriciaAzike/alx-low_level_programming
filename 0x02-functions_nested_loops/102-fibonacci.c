#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - print the first Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x1 = 1, x2 = 2, x3;
	int i = 0;

	printf("%d, %d", x1, x2);
	while (i < 48)
	{
		x3 = x1 + x2;
		i++;
		printf(", %d", x3);
		x1 = x2;
		x2 = x3;
	}
	printf("\n");
	return (0);
}
