#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of 2 diagonals of a square matrix
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int dsum1 = 0, dsum2 = 0, i = 0;

	while (i < (size * size))
	{
		if (i % (size + 1) == 0)
		{
			dsum1 += a[i];
		}
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
		{
			dsum2 += a[i];
		}
		i++;
	}
	printf("%d, %d\n", dsum1, dsum2);
}
