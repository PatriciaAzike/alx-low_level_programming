#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything.
 * @format: types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *s, *separator = "";
	va_list arg_list;

	va_start(arg_list, format);
	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			printf("%s%c", separator, va_arg(arg_list, int));
		}
		else if (format[i] == 'i')
		{
			printf("%s%d", separator, va_arg(arg_list, int));
		}
		else if (format[i] == 'f')
		{
			printf("%s%f", separator, va_arg(arg_list, double));
		}
		else if (format[i] == 's')
		{
			s = va_arg(arg_list, char *);
			if (s == NULL)
			{
				s = "(nil)";
			}
			printf("%s%s", separator, s);
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(arg_list);
}

