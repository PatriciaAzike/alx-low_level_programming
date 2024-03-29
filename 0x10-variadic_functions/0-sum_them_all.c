#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all -  sums all parameters of the function
 * @n: number of parameters to be summed
 * Return: Returns the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list arr;

	if (n == 0)
		return (0);

	va_start(arr, n);
	while (i < n)
	{
		sum += va_arg(arr, int);
		i++;
	}
	va_end(arr);
	return (sum);

}
