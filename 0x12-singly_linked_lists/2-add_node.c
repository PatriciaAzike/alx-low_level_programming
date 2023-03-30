#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list.
 * @head: head of the linked list.
 * @str: string value for the new node
 * Return: address of the new node, or NULL it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t count;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (count = 0; str[count]; count++)
		;

	new_node->len = count;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
