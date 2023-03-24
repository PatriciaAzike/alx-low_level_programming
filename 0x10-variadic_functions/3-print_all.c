#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all-  prints anything.
 * @format: format of operation
 * Return: Returns nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j, count = 0;
	char *s;
	const char sep[] = "cifs";
	va_list arg_list;

	va_start(arg_list, format);
	while (format && format[i])
	{
		j = 0;
		while (sep[j])
		{
			if (format[i] == sep[j] && count)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(arg_list, int));
			count = 1;
			break;
		case 'i':
			printf("%d", va_arg(arg_list, int));
			count = 1;
			break;
		case 'f':
			printf("%f", va_arg(arg_list, double));
			count = 1;
			break;
		case 's':
			s = va_arg(arg_list, char *);
			count = 1;
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		} i++;
	}
	printf("\n");
	va_end(arg_list);
}
