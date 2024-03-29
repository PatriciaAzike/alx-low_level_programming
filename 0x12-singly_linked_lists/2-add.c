#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list_t list
 * @head: pointer to a pointer to the head of the list
 * @str: string value for the new node
 * Return: the address of the new node, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t count;
	
	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	count = 0;
	while (str[count])
	{
		count++;
	}
	new_node->len = count;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
