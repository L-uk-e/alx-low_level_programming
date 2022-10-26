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
	char *string;
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	string = strdup(str);

	new_node->str = string;

	new_node->next = (*head)->next;

	(*head)->next = new_node;

	return (new_node);
}
