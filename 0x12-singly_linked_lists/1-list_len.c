#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints the number of elements of a list_t list
 * @h: pointer to head of list
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
