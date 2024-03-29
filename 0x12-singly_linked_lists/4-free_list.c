#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head of a singly linked list
 * Return: no return (void)
 */

void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head))
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
