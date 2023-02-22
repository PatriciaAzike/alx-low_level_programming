#include <stdio.h>
/**
 * main - print first 98 Fibonacci numbers 
 * Return: 0
 */

int main(void)
{
	unsigned long x1 = 1, x2 = 1, x3;
	unsigned long h1, t1, h2, t2, bust;
	
	printf("1");
	for (int i = 2; i < 98; i++)
	{
		x3 = x1 + x2;
		if (x3 > 999999999)
		{
			h1 = x2 / 1000000000;
			t1 = x2 % 1000000000;
			h2 = x3 / 1000000000;
			t2 = x3 % 1000000000;
			bust = (t1 + t2) / 1000000000;
			printf(", %lu%09lu", h1 + h2 + bust, (t1 + t2) % 1000000000);
		}
		else
		{
			printf(", %lu", x3);
		}
		x1 = x2;
		x2 = x3;
	}
	x;
	printf("\n");
	return (0);
}

