#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @separator: string to be printed between numbers
 * @n: number of strings passed to the function
 * Return: no return (void)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list arg_list;

	va_start(arg_list, n);
	i = 0;
	while (i < n)
	{
		s = va_arg(arg_list, char *);
		if (s)
		{
			printf("%s", s);
		}
		if (s == NULL)
		{
			printf("(nil)");
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(arg_list);
}
