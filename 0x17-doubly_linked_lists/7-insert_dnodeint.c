#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the pointer of the first element of the list
 * @idx: Index of the list where to add new node
 * @n: number/data of the node to be added
 *
 * Return: Address of the new node
 * or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp;
	unsigned int count = 0;

	new_node->n = n;

	temp = *h;
	while (count != idx)
	{
		temp = temp->next;
		count++;
	}

	new_node->prev = temp->prev;
	new_node->next = temp;
	if (temp->prev != NULL)
	{
		temp->prev->next = new_node;
	}
	temp->prev = new_node;

	return (new_node);
}
