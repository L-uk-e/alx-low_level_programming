#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlist
 * @head: pointer to the pointer of first element of the dlist
 * @n: Number to be stored in the new node
 *
 * Return: Address of the new element
 * NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp_p;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	temp_p = *head;

	if (temp_p == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (temp_p->next != NULL)
	{
		temp_p = temp_p->next;
	}

	new_node->prev = temp_p;
	temp_p->next = new_node;
	return (new_node);
}
