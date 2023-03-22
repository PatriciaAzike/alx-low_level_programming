#include <stddef.h>
#include "function_pointers.h"
/**
*print_name - a function that executes a function
*given as a parameter on each element of an array
*@array: pointer variable of type int
*@size: size of the array
*@action: pointer to function that would be used
*Return: no return (void)
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	if (size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
