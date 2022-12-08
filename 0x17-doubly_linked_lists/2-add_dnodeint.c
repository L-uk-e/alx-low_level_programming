#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a list
 * @head: Pointer to the pointer of the first element of the list
 * @n: Data for the new node
 *
 * Return: Address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
