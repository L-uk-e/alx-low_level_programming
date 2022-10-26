#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 * @head: Pointer to the pointer of first element
 * @str: String to be stored in new element
 *
 * Return: Address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	list_t *last = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL || last == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (NULL);
	}

	last = *head;

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new_node;
}
