#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer.
 * @size: size of buffer.
 * Return: no return.
 */

void print_buffer(char *b, int size)
{
	int i, j;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
    
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; j += 2)
		{
			if (j < size)
			{
				printf("%02x", b[j] & 0xff);
				if (j + 1 < size)
				{
					printf("%02x", b[j + 1] & 0xff);
				}
				else
				{
					printf("  ");
				}
				printf(" ");
			}
			else
			{
				printf("     ");
			}
		}
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				char c = isprint(b[j]) ? b[j] : '.';
				printf("%c", c);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

