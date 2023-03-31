#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list.
 * @head: head of the linked list.
 * @str: string value for the new node
 * Return: address of the new node, or NULL it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t count;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (count = 0; str[count]; count++)
		;

	new_node->len = count;
	new_node->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}
