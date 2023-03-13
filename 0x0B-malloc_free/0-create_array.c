#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char
 * @size: size of memory to be allocated
 * @c: variable of type character
 * Return: pointer to array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *vec = (char *) malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	if (vec == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < size)
		{
			vec[i] = c;
			i++;
		}
		return (vec);
	}
}
