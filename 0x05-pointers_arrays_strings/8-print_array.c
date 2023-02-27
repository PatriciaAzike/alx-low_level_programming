#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array
 * @a: first integer
 * @n: second integer
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i = 0;
	while (i < n)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("\n");
}
