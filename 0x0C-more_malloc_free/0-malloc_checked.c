#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - unction that allocates memory using malloc
 * @b: unsigned integer
 * Return: pointer to allocated memory, or 98 if it fails
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
