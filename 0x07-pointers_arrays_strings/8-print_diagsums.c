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

	while (i < size)
	{
		dsum1 += a[(size + 1) * i];
		dsum2 += a[(size - 1) * (i + 1)];
		i++;
	}
	printf("%d, %d\n", dsum1, dsum2);
}
