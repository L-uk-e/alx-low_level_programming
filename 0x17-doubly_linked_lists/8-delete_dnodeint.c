#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at given index
 * @head: Pointer to the pointer of the first element of a dlist
 * @index: Index of the node to be deleted
 *
 * Return: 1 if succeeded
 * -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp_p = malloc(sizeof(dlistint_t));
	unsigned int count = 0;

	temp_p = *head;

	while (count < index)
	{
		temp_p = temp_p->next;
		if (temp_p == NULL)
		{
			return (-1);
		}
		count++;
	}

	if (count > 0)
	{
		temp_p->prev->next = temp_p->next;
	}
	else
	{
		*head = temp_p->next;
	}

	if (temp_p->next != NULL)
	{
		temp_p->next->prev = temp_p->prev;
	}
	free(temp_p);

	return (1);
}
