#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - reverse an array of integers
 * @a: array
 * @n: number of elements of the array
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1;

	while (i < j)
	{
		int x = a[i];
		a[i] = a[j];
		a[j] = x;
		i++;
		j--;

	}
}
