#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: no return (void)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0, num;
	va_list arg_list;

	va_start(arg_list, n);
	while (i < n)
	{
		num = va_arg(arg_list, int);
		printf("%d", num);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(arg_list);
}
