#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of array elements
 * @size: size of array elements in bytes
 * Return: return pointer to array, or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	int *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
