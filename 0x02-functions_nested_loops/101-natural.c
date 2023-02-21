#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - prints the sum of all multiples of 3 or 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, summ = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			summ += i;
		}
		i++;
	}
	printf("%d\n", summ);
	return (0);
}
