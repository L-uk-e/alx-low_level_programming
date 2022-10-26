#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list
 * @head: Pointer to head(pointer of the first element)
 * @str: string of the element to be added
 *
 * Return: Address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *string = strdup(str);
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = string;

	new_node->next = *head;

	*head = new_node;

	if (new_node == NULL)
	{
		return (NULL);
	}

	return (new_node);
}
