#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: pointer variable of type int
 * @size: number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 * Return: returns the index of the first element for which
 * the cmp function does not return 0 or -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0 )
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
